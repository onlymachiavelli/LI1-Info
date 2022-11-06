import numpy as np


def size(min: int, max: int) -> int:
    n = input(int("Enter number of computers "))
    if min <= n <= max:
        return n
    return size(n, min, max)


def fillCodes(n: int, arr):
    for i in range(n):
        print("enter the code ! ")
        while True:
            arr[i] = size()


code = np.array()
