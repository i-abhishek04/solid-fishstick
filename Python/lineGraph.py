import sys
import matplotlib
from matplotlib.lines import lineStyles
# matplotlib.use('Agg')

import matplotlib.pyplot as plt
import numpy as np

x = np.array([1,2,3,4])
y = np.array([4,3,2,1])

plt.subplot(1,2,1)
plt.plot(x,y)
plt.title("Graph 1")

x = np.array(['a','b','c','d'])
y = np.array([20,10,40,30])
plt.subplot(1,2,2)
plt.plot(x,y, c='r', linestyle='dotted', linewidth='3')
plt.title("Graph 2")

plt.show()
plt.savefig(sys.stdout.buffer)
sys.stdout.flush()