x = int(input("Enter X \n")) 
y = int(input("Enter Y \n"))
z = int(input("Enter Z \n"))

#find the max 
if x > y and x > z :
    print(f"The max between {x} and {y} and {z} is {x}")
elif y > x and y > z :
    print(f"The max between {x} and {y} and {z} is {y}")
else :
    print(f"The max between {x} and {y} and {z} is {z}")
    