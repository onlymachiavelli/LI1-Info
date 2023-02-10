num = 0 

while num <= 0:
    num = int(input("Enter a positive integer \n"))

#dividers 
for i in range(1,(num+1)):
    if num % i == 0:
        print(f"{i} is a divider of {num}")

