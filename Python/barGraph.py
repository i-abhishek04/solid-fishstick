import sys
import matplotlib

import matplotlib.pyplot as plt
import numpy as np

x = np.array(['a','b','c','d'])
y = np.array([3,8,10,5])
plt.bar(x,y,color ='#03103f',width=0.3)
plt.show()