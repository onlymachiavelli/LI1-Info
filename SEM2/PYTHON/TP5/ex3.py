def getindex(string, index) :
    res = ""
    for i in range (len(string)) :
        if i != index :
            res += string[i]
    return res

def prime(num) :

    check = True 
    for i in range (2,  (num//2)+1) :
        if (num % i == 0) :
            print(i)
            check = False 
            break

    return check 

#read the n 

n = int(input("Enter a number "))


sn = str(n)

check = True

check = prime(sn)
if (check) :
    for i in range(1,len(sn)) : 
        bro = sn[i]+getindex(sn, i)
        print(bro)
        if not prime(int(bro)) :
            check = False
            break


if check : 
    print(f"{n} is a circular prime number")
else :
    print(f"{n} is not a circular prime number")