from matplotlib import numpy
import numpy as np
import matplotlib.pyplot as plt
filename = "../perf_analysis.txt"
conv = {
    0: lambda x: int(x,16),
    1: lambda x: int(x),
    2: lambda x: float(x)
}
array = list(np.loadtxt(filename, delimiter="\t", converters=conv))
array.sort(key=lambda x:x[1])
array = numpy.array(array)
pc = array[:,0]
index = range(array.__len__())
repeat = array[:,1]
consume = array[:,2]
plt.plot(index, np.log10(repeat), "--")
plt.plot(index, np.log10(consume), ".")
plt.show()
