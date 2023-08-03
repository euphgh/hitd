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
            #print(timeSize)
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
    realTotalTime=np.sum([blk.totalTime() for blk in blist])
    


    hlist = []
    for blk in blist:
        prop = blk.totalTime()/realTotalTime
        if (prop>0.01): hlist.append(blk)

    mid_startTicks = []
    for blk in hlist:
        sorted_idx = np.argsort(blk.singleTimes)
        median_idx = len(sorted_idx) // 2
        slice_idx = sorted_idx[max(0, median_idx - 2): min(median_idx + 3, len(sorted_idx) - 1)]
        timeSlice = blk.startTicks[np.array(slice_idx)]
        mid_startTicks.append(timeSlice)

    with open(startTicks_filename, 'w') as file:
        file.write('basic info\n'+'blk num: '+str(len(blist))+ '\n')
        file.write('hlk num: '+str(len(hlist))+ '\n')
        file.write('total time: '+str(realTotalTime)+ '\n'+'\n')
        for i in range(len(hlist)):
            blk=hlist[i]
            ticks=mid_startTicks[i]
            tick = ' '.join(str(element) for element in ticks)
            prop = blk.totalTime()/realTotalTime

            file.write('blk: ' + str(i) + '\n')
            file.write('total time: ' + str(blk.totalTime()) + '    prop: ' + str(prop)+'\n')
            file.write('start time: '+tick + '\n')
            file.write('instNum is ' + str(blk.instNum) + '\n')

            assert len(blk.pcS)==len(blk.avgIPC)
            for j in range(len(blk.pcS)):
                pc=str(blk.pcS[j])
                ipc=str(blk.avgIPC[j])
                file.write('pc: '+ pc + '       CPI: ' + ipc + '\n')
            file.write('\n')

    print(realTotalTime)
    return realTotalTime

if __name__ == "__main__":
    sum=0
    for i in range (10):
        sum+=main(i+1)
    print(sum)
