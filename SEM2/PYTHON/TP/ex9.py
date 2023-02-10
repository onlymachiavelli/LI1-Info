

n = -1 
while n < 0:
    n = int(input("Enter a positive integer \n"))

fact  = 1 
for i in range(1,n+1):
    fact *= i
print(f"The factorial of {n} is {fact}")
