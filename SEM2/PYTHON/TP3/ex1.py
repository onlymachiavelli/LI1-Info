


while (True) :
    a = int(input("Enter A ")) 
    b = int(input("Enter B "))

    if (a > 0 and b > 0) :
        break 

while (a != b) :
    if (a > b) :
        a = a - b
    else :
        b = b - a

print("PGCD = ", a)