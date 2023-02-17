

while True:
    num = int(input("Enter a number "))
    if num > 0:
        break


#decompose the num 


arr = [] 

while (num > 0) :
    arr.append(num % 10)
    num = num // 10

check = True 

for i in range (len(arr)): 
    for j in range (i+1, len(arr)) :
        if (arr[i] == arr[j]) :
            check = False 
            break


if (check) :
    print("All digits are different")
else :
    print("There are at least two same digits")