import numpy as np


def size(min: int, max: int) -> int:
    n = int(input())
    if min <= n <= max:
        return n
    return size(min, max)


def fillArr(n, codes, model, price):
    for i in range(n):
        print("Enter Code ! ")
        print("Enter the code ")
        codes[i] = size(1000, 9999)

        print("Enter model ! ")
        while True:
            model[i] = input()
            if 65 <= ord(model[i][0]) <= 90:
                break

        print("Enter the price ")
        while True:
            price[i] = float(input())
            if price[i] > 0:
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
                check = False

    print(arr, err, gadem)


def exist(n, arr, model: str) -> bool:
    for i in range(n):
        if arr[i]["model"] == model:
            return True
    return False


def expensive(n: int, arr, err, gadem):
    res = np.zeros(n, dtype={})
    m = 0
    for i in range(n):
        select = {
            "code": arr[i],
            "model": err[i],
            "price": gadem[i]
        }
        if not exist(m, res, select["model"]):
            for j in range(n):
                if gadem[j] > select["price"]:
                    select = {
                        "code": arr[j],
                        "model": err[j],
                        "price": gadem[j]
                    }
            res[m] = select
            m += 1

    for i in range(m):
        print("the most expensive item in ",
              m[i]["model"], " is worth : ", m[i]["price"])


print("Enter the number of computers ")

#fillArr(n, code, model, price)
n = 6
code = [2504, 2230, 1514, 3210, 1140, 1026]
model = ["Dell", "Hp", "Asus", "Hp", "Asus", "Asus"]
price = [1500.5, 1925.3, 2015.0, 2000.5, 1200.5, 1795.5]

triZawali(n, code, model, price)
expensive(n, code, model, price)
