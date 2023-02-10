num = 0 

while num <= 0:
    num = int(input("Enter a positive integer \n"))
counter = 0 
#dividers 
for i in range(1,(num+1)):
    if num % i == 0:
        counter += 1 
        print(f"{i} is a divider of {num}")
print(f"The sum of the dividers is {counter}")
