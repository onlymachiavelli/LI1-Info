
import random as r 
import numpy as np 

n = 100 


def fillArr(length ,arr, min , max) :
    for i in range (length) :
        arr[i] = r.randint(min, max+1) 

def printArr(length, arr) :
    for i in range (length) :
        print(arr[i], end = " ") 
    print()

def indiceDuMin(length, arr) :
    mn = arr[0]
    index = 0
    for i in range (1,length) :
        if arr[i] < mn :
            mn = arr[i]
            index = i 
    return index


#define arr 
arr = np.zeros(5, dtype = int)


#fill arr

a = int(input("Enter A ! "))
b = int(input("Enter B ! "))

fillArr(100, arr, a, b)
printArr(100,arr)

print(indiceDuMin(5, arr))


