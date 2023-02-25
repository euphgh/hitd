import pdb
import struct as st
import numpy as np
import matplotlib.pyplot as plt
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
    def totalTime(self):
        return self.singleTimes.sum()


filename = "./perf-9.bin"
headFmt = "=IcI"
timeFmt = "=If"
headSize = st.calcsize(headFmt)
timeSize = st.calcsize(timeFmt)

inst_list:list = []
with open(filename, "rb") as fp:
    while True:
        bytesRes = fp.read(headSize)
        if bytesRes == b'':break

        inst = inst_info()
        res = st.unpack(headFmt, bytesRes)
        inst.pc = res[0]
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
    else:
        assert blk.runTime==inst.runTime, "block runtime not equal"
        blk.singleTimes += np.array(inst.allConsume)
        blk.avgIPC.append(np.sum(inst.allConsume)/inst.runTime)
        blk.instNum += 1

blist.sort(key=lambda blk: blk.totalTime(),reverse=True)
totalCons = np.sum([blk.totalTime() for blk in blist])
totalTime = np.sum([blk.instNum * blk.runTime for blk in blist])

hlist = []
print(len(blist))
for blk in blist:
    prop = blk.totalTime()/totalTime
    if (prop>0.01): hlist.append(blk)

print(len(hlist))
for blk in hlist:
    prop = blk.totalTime()/totalTime
    print(blk.totalTime(), prop)


# hlist = list(filter(lambda blk: blk.totalTime()/totalCons > 0.01, blist))
# hlist.sort(key=lambda blk: blk.totalTime(),reverse=True)
#
#
#
fig, ax1 = plt.subplots()
# ax1.set_ylim(0,10)
x_aix = range(np.sum([blk.instNum for blk in hlist]))
y_consProp = [ blk.avgIPC[i] for blk in hlist for i in range(blk.instNum) ]

y_time = [ blk.avgIPC[i]*blk.runTime for blk in hlist for i in range(blk.instNum) ]
ax2 = ax1.twinx()
ax2.plot(x_aix,y_time, '--', color="m")

y_timeProp = [ blk.runTime for blk in hlist ]
bar_width = [blk.instNum for blk in hlist]
bar_start = np.cumsum(np.array([0] + bar_width[0:-1]))
ax2.bar(bar_start,y_timeProp, width=bar_width, align='edge', edgecolor="c", alpha=0.3)

ax1.plot(x_aix,y_consProp, ".", color = "g")

plt.show()
