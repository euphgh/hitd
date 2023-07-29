import pdb
import struct as st
import numpy as np
import matplotlib.pyplot as plt
import sys

binPath = "./logs/perf/"
sTickPath = "./logs/perf/"
imgPath = "./logs/perf/"

class inst_info:
    def __init__(self):
        self.pc:int
        self.isEnterance:bool
        self.runTime:int
        self.allTicks:list = []
        self.allConsume:list = []

class basic_block:
    def __init__(self) -> None:
        self.runTime:int = 0
        self.singleTimes:np.array([])
        self.startTicks:np.array([])

        self.instNum:int = 0
        self.avgIPC:list= []
        self.pcS:list=[]
    def totalTime(self):
        return self.singleTimes.sum()


def main(idx):
    filename = binPath + "perf-{}.bin".format(idx)
    startTicks_filename = sTickPath + "startTicks-{}.txt".format(idx)
    headFmt = "=IcI"
    timeFmt = "=If"
    headSize = st.calcsize(headFmt)
    timeSize = st.calcsize(timeFmt)

    inst_list:list = []
    with open(filename, "rb") as fp:
        while True:
            bytesRes = fp.read(headSize)
            print(timeSize)
            if bytesRes == b'':break

            inst = inst_info()
            res = st.unpack(headFmt, bytesRes)
            inst.pc = hex(res[0])
            # print(inst.pc,"haha")
            inst.isEnterance = res[1]==b'\x01'
            inst.runTime = res[2]
            for i in range(inst.runTime):
                bytesRes = fp.read(timeSize)
                res = st.unpack(timeFmt,bytesRes)
                inst.allTicks.append(res[0])
                inst.allConsume.append(res[1])
            inst_list.append(inst)

    fp.close

    blist:list = []
    blk = basic_block()
    is_start:bool = True
    for inst in inst_list:
        if inst.isEnterance==True:
            if not (is_start):
                blist.append(blk)
            else:
                is_start = False
            blk = basic_block()
            blk.instNum = 1
            blk.runTime = inst.runTime
            blk.startTicks = np.array(inst.allTicks)
            blk.singleTimes = np.array(inst.allConsume)
            blk.avgIPC.append(np.sum(inst.allConsume)/inst.runTime)
            blk.pcS.append(inst.pc)
        else:
            assert blk.runTime==inst.runTime, "block runtime not equal"
            blk.singleTimes += np.array(inst.allConsume)
            blk.avgIPC.append(np.sum(inst.allConsume)/inst.runTime)
            blk.instNum += 1
            blk.pcS.append(inst.pc)

    blist.sort(key=lambda blk: blk.totalTime(),reverse=True)
    totalCons = np.sum([blk.totalTime() for blk in blist])
    totalTime = np.sum([blk.instNum * blk.runTime for blk in blist])

    # for blk in blist:
    #     print(blk.instNum, blk.runTime, blk.instNum * blk.runTime, blk.totalTime())

    hlist = []
    print(len(blist))
    for blk in blist:
        prop = blk.totalTime()/totalTime
        if (prop>0.01): hlist.append(blk)
    # print('s = ' + str(s))

    print(len(hlist))
    for blk in hlist:
        prop = blk.totalTime()/totalTime
        print(blk.totalTime(), prop)

    mid_startTicks = []
    for blk in hlist:
        sorted_idx = np.argsort(blk.singleTimes)
        # for i in sorted_idx.tolist():
        #     print(blist[i].)
        # exit(0)

        median_idx = len(sorted_idx) // 2
        slice_idx = sorted_idx[max(0, median_idx - 2): min(median_idx + 3, len(sorted_idx) - 1)]
        timeSlice = blk.startTicks[np.array(slice_idx)]
        mid_startTicks.append(timeSlice)

    with open(startTicks_filename, 'w') as file:
        # for blk in hlist:
        #     line = ' '.join(str(blk.startTicks))
        for i in range(len(hlist)):
            blk=hlist[i]
            ticks=mid_startTicks[i]
            tick = ' '.join(str(element) for element in ticks)

            file.write('blk: ' + str(i) + '\n')
            file.write('start time: '+tick + '\n')
            file.write('instNum is ' + str(blk.instNum) + '\n')
            assert len(blk.pcS)==len(blk.avgIPC)
            for j in range(len(blk.pcS)):
                pc=str(blk.pcS[j])
                ipc=str(blk.avgIPC[j])
                file.write('pc: '+ pc + '       ipc: ' + ipc + '\n')
            file.write('\n')

    plt.figure()

    fig, ax1 = plt.subplots()
    # ax1.set_ylim(0,10)
    x_aix = range(np.sum([blk.instNum for blk in hlist]))
    y_consProp = [ blk.avgIPC[i] for blk in hlist for i in range(blk.instNum) ]
    # print(y_consProp)
    y_time = [ blk.avgIPC[i]*blk.runTime for blk in hlist for i in range(blk.instNum) ]
    ax2 = ax1.twinx()
    ax2.plot(x_aix,y_time, '--', color="m")

    y_timeProp = [ blk.runTime for blk in hlist ]

    bar_width = [blk.instNum for blk in hlist]
    bar_start = np.cumsum(np.array([0] + bar_width[0:-1]))
    ax2.bar(bar_start,y_timeProp, width=bar_width, align='edge', edgecolor="c", alpha=0.5)

    ax1.plot(x_aix,y_consProp, ".", color = "g")

    # plt.show()
    plt.savefig(imgPath + "inst-{}.png".format(idx))

    # plt.figure()
    # fig, (ax1, ax2) = plt.subplots(1, 2)
    # x = np.arange(len(hlist)).tolist()
    # y_runTime = [ blk.runTime for blk in hlist ]
    # ax1.bar(x, y_runTime, width=1)

    # y_totalCons = [ blk.totalTime() for blk in hlist ]
    # y_avgCons = [ np.mean(blk.singleTimes) for blk in hlist]
    # ax3 = ax2.twinx()
    # ax2.plot(x, y_totalCons, color="b", marker="o", markersize=4)
    # ax3.plot(x, y_avgCons, color="orange", marker="+")

    # plt.tight_layout()
    # plt.savefig('./output/blk.png')

    plt.figure()
    fig, ax1 = plt.subplots(dpi=500)
    # fig.set_dpi(500)

    x_aix = range(np.sum([blk.instNum for blk in hlist]))
    y_consProp = [ blk.avgIPC[i] for blk in hlist for i in range(blk.instNum) ]
    # print(y_consProp)
    y_time = [ blk.avgIPC[i]*blk.runTime for blk in hlist for i in range(blk.instNum) ]
    ax1.set_xticks(range(0, max(x_aix) + 10, 10))
    ax2 = ax1.twinx()

    # ax1.rcParams['figure.dpi'] = 500
    ax1.set_yscale('log')
    yticks = [ 10**i for i in range(10) ]
    ax1.set_yticks(yticks)
    ax1.set_yticklabels(yticks)

    # line[0].set_markerfacecolor('red')
    # ax1.plot(x_aix,y_consProp, '.', color="m", marker="o", markersize=0.5)
    ax1.plot(x_aix, y_consProp, '-', color="g", linewidth=0.5, alpha=0.5)
    ax1.plot(x_aix, y_consProp, 'o', color='m', markersize=0.5)


    y_timeProp = [ blk.totalTime() for blk in hlist ]
    bar_width = [blk.instNum for blk in hlist]
    bar_start = np.cumsum(np.array([0] + bar_width[0:-1]))
    ax2.bar(bar_start,y_timeProp, width=bar_width, align='edge', edgecolor="w", alpha=0.5, linewidth=0.5)

    for x_start in bar_start:
        if x_start > 0:
            ax2.vlines(x_start, 0.0, max(y_timeProp), linestyle='-.', colors='b', alpha=0.6, linewidth=0.5)

    # print(sorted(y_timeProp, reverse=True))

    plt.gcf().set_size_inches(np.sum([blk.instNum for blk in hlist]) / 16 + 1, 6)
    plt.savefig(imgPath + "blk-{}.png".format(idx))

    # print(np.sum([blk.instNum for blk in hlist]))


if __name__ == "__main__":
    if (len(sys.argv)!=2):
        print("can only input perf test number")
    else:
        main(int(sys.argv[1]))
