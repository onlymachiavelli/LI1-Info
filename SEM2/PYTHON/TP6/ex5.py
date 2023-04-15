myString = input("Enter a string : ")

for i in range (len(myString)) :
    if i %2 == 0 :
        print(myString[i], end="")