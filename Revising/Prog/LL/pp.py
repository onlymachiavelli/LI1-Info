
n = 10 
"""spaces = n-1
st = 1
for i in range (n): 
    res = ""
    for k in range (spaces) :
        res += " "

    for k in range (st) :
        res += "*" 
    for k in range (spaces) :
        res += " "
    print(res)
    spaces -= 1 
    st +=2
    """
nb=0
for i in range(n):
    for  j in range(2*n):
        
        if j==n+i:
            for x in range(nb,nb*2):
                print("*",end="")
        else:
            print(" ",end="")
    print()
    nb+=1