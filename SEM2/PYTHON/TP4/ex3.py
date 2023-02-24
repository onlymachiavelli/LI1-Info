arr = []
while True : 
    d = int(input("Enter Data Integer "))
    arr.append(d)
    l = input("Quit ? y-> quit , else stay ")
    if l.upper() == "Y" :
        break 
sumF = 0 
for data in arr :
    if data % 5 == 0 :
        sumF +=1 
print(f"total numbers that can be devided by 5 : {sumF}") 
evenSum = 0 
for data in arr :
    if data % 2 == 0 :
        evenSum +=1 
print(f"total even numbers : {evenSum}")
sum = 0
for data in arr :
    sum += data 
sum /= len(arr) 
check = sum >= 10 
