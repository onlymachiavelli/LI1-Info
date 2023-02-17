


while (True) :
    num = int(input("Enter a number "))
    if (num > 0) :
        break

check = True 
for i in range (2,  (num//2)+1) :
    if (num % i == 0) :
        print(i)
        check = False 
        break

if (check) :
    print(f"{num} is a prime number")
else :
    print(f"{num} is not a prime number")
