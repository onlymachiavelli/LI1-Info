arr = []




while True : 
    d = int(input("Enter Data Integer "))
    arr.append(d)
    l = input("Quit ? y-> quit , else stay ")
    if l.upper() == "Y" :
        break 

for data in arr :
    print(data, end=" ")

print("\n")

for i in range (len(arr)): 
    print(f"The index is {i} and the data is {arr[i]}")
sum = 0 
for data in arr :
    sum += data 

print(f"The sum is {sum}")

newArr = []
for data in arr :
    newArr.append(data*3)



max = newArr[0]
min =  newArr[0]


for data in arr :
    if data > max :
        max = data
    if data < min : 
        min = data 


print(f"The min is {min} and the max is {max} ")

even = 0
odd = 0
for data in newArr:
    if data % 2 == 0 :
        even += 1
    else :
        odd += data
print(f"in this array there's {even} even numbers")

print(f"The sum of odd numbers is {odd}") 
