while True: 
    num = int(input("Enter a number "))
    if num > 100 :
        break 


arr = []

n = num 
while n > 0 :
    arr.append(n%10)
    n//=10 
length = len(arr)
br = length
print(arr)
sum = 0
check = False 
while not check : 
    check = True
    sum = 0
    for i in range (len(arr)) :
        if (arr[i]) : 
            sum += arr[i]
            arr[i] = None

    if sum > 9 :
        while sum > 0 :
            arr = []
            arr.append(sum%10)
            sum//=10 
            length = len(arr)
        print(arr)
        check = False
num += (10**br)*sum

print(f"The final encrypted code is : {num}")