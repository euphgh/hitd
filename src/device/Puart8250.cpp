#include "macro.hpp"
#include "paddr/paddr_interface.hpp"
#include "testbench/sim_state.hpp"
#include <csignal>
#include <cstdio>

#define UART8250_TX_RX_DLL 0
#define UART8250_IER_DLM 1
#define UART8250_IIR_FCR 2
#define UART8250_LCR 3
#define UART8250_MCR 4
#define UART8250_LSR 5
#define UART8250_MSR 6
#define UART8250_SCR 7

#define UART8250_IER_RDA 1  // Received data available
#define UART8250_IER_THRE 2 // Transmitter holding register empty
#define UART8250_IER_LSRC 4 // Receiver line status register chagne
#define UART8250_IER_MSRC 8 // Modem status register change

Puart8250::Puart8250(el::Logger *input_logger)
    : output(input_logger), DLL(0), DLM(0), IER(0), LCR(0b00000011), IIR(0),
      MCR(0) {}

bool Puart8250::do_read(word_t addr, wen_t info, word_t *data) { /*{{{*/
  std::unique_lock<std::mutex> lock(rx_lock);
  *data = 0;
  if (info.size != 1) {
    log_pt->error("read uart8250 size not 1");
    return false;
  }
  switch (addr) {
  case UART8250_TX_RX_DLL: {
    if (DLAB()) {
      // DLL
      *data = DLL;
    } else {
      // RX
      if (!rx.empty()) {
        *data = rx.front();
        rx.pop();
      }
    }
    break;
  }
  case UART8250_IER_DLM: {
    if (DLAB()) {
      // DLM
      *data = DLM;
    } else {
      // IER
      *data = IER;
    }
    break;
  }
  case UART8250_IIR_FCR: {
    // IIR
    update_IIR();
    *data = IIR;
    thr_empty = false;
    break;
  }
  case UART8250_LCR: {
    *data = LCR;
    break;
  }
  case UART8250_MCR: {
    *data = MCR;
    break;
  }
  case UART8250_LSR: {
    *data = (!rx.empty()) | (1 << 5) | (1 << 6);
    break;
  }
  case UART8250_MSR: {
    // Carrier detect = 1
    // Clear to send = 1
    *data = (1 << 7) | (1 << 4);
    break;
  }
  case UART8250_SCR: {
    *data = 0;
    break;
  }
  default:
    IFDEF(
        CONFIG_NSC_DIFF,
        __ASSERT_SIM__(false, "read not exist addr of uart: " HEX_WORD, addr));
    return false;
  }
  return true;
} /*}}}*/
bool Puart8250::do_write(word_t addr, wen_t info, const word_t data) { /*{{{*/
  // std::unique_lock<std::mutex> lock_tx(tx_lock);
  std::unique_lock<std::mutex> lock_rx(rx_lock);
  bool res = true;
  if (info.size != 1) {
    log_pt->error("write uart8250 size not 1");
    return false;
  }
  switch (addr) {
  case UART8250_TX_RX_DLL:
    if (DLAB())
      DLL = data;
    else
      write_buf(data);
    break;
  case UART8250_IER_DLM: {
    if (DLAB()) {
      DLM = data;
    } else {
      IER = data;
    }
    break;
  }
  case UART8250_IIR_FCR: {
    // FCR allow clear FIFO
    if ((data) & (1 << 1)) {
      while (!rx.empty())
        rx.pop();
    }
    if ((data) & (1 << 2)) {
      while (exist_tx())
        getc();
    }
    break;
  }
  case UART8250_LCR: {
    LCR = data;
    break;
  }
  case UART8250_MCR: {
    MCR = data;
    break;
  }
  case UART8250_LSR:
  case UART8250_MSR:
  case UART8250_SCR:
  default:
    log_pt->error("write uart8250 addr %v error", addr);
    return false;
  }
  return res;
} /*}}}*/

void Puart8250::putc(char c) {
  std::unique_lock<std::mutex> lock(rx_lock);
  rx.push(c);
}

bool Puart8250::irq() {
  update_IIR();
  return !(IIR & 1);
}

bool Puart8250::DLAB() { return (LCR >> 7) != 0; }
void Puart8250::update_IIR() { /*{{{*/
  IIR = 3 << 6;                // FIFO Enabled
  bool no_int = true;
  if ((IER & UART8250_IER_THRE) && thr_empty) {
    IIR |= (1 << 1);
    no_int = false;
  }
  if ((IER & UART8250_IER_RDA) && !rx.empty()) {
    IIR |= (2 << 1);
    no_int = false;
  }
  IIR |= no_int;
} /*}}}*/
