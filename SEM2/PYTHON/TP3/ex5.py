


for i in range (100, 1000) :
    n = i
    arr = []
    while n > 0 :   
        arr.append(n % 10)
        n = n // 10
    sum = 0
    prod = 1
    for j in range (len(arr)) :
        sum += arr[j] 
        prod *= arr[j]
    if (prod % sum == 0) :
        print(f"the numbers {arr} = {prod} can be devided by {sum} ")
    else :
        print(f"the numbers {arr} = {prod} can not be devided by {sum} ")
