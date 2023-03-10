

def sumDiv (n:int) -> int :
    res = 0
    for i in range (1, n) :
        if ( n%2 ==0):sum += i

    return res 

def prime(num) :

    check = True 
    for i in range (2,  (num//2)+1) :
        if (num % i == 0) :
            check = False 
            break

    return check 



def perfect (n:int) -> bool :
    return sumDiv(n) == n

def luckyNumber (n:int ) ->int :
    
    for i in range (1, n) :
        if (not prime(n+i+i**2)) :
            return False
        
    return True 

print(luckyNumber(7))