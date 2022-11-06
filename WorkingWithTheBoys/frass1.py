import numpy as np


def size(min: int, max: int) -> int:
    n = input(int("Enter number of computers "))
    if min <= n <= max:
        return n
    return size(n, min, max)


def fillCodes(n: int, arr):
    for i in range(n):
        print("enter the code ! ")
        arr[i] = size(1000, 9999)


def fillModel(n: int, arr):
    for i in range(n):
        print("Enter the model ! ")
        while True:
            arr[i] = input()
            if 65 <= ord(arr[i][0]) <= 90:
                break


def fillPrice(n: int, arr):
    for i in range(n):
        print("Enter the price")
        while True:
            arr[i] = float(input())
            if arr[i] > 0:
                break


def triZawali(n: int, arr, err, gadem):
    check = False
    while not check:
        check = True
        for i in range(n-1):
            if ord(err[i][0]) > ord(err[i+1][0]):
                err[i], err[i+1] = err[i+1], err[i]
                arr[i], arr[i+1] = arr[i+1], arr[i]
                gadem[i], gadem[i+1] = gadem[i+1], gadem[i]


def expensive(n: int, arr, err, gadem):
    res = np.array(n, {})
    m = 0

    for i in range(n):
        name = arra[]


code = np.array()
