import pandas
import numpy as np 
from matplotlib import pyplot as plt  

x = np.random.randn(50)
print(x)
y = np.sin(x)
plt.hist(x, bins = 30, alpha=0.5)
plt.title("Helllo world" , color='red')
plt.text(0.5,5, "hello world")
plt.legend()
plt.show()
print(y)