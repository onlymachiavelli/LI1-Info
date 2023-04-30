import random 
import numpy 
from matplotlib import pyplot 



length = random.randint(10, 16)


array = numpy.random.randint(1,100, length)
print(array)
Y = numpy.exp(array)
print(Y)

pyplot.plot(array, Y, 'r--',color='blue', linewidth=1.5) 
pyplot.xlabel("X LABEL")
pyplot.ylabel("Y LABEL")
pyplot.title("Hello world") 

pyplot.grid(True, color='red', linestyle='--',linewidth=1)
pyplot.show()