

a = 0 
while a <= 0:
    a = int(input("Enter a positive integer \n"))
    
sum = 0 
for i in range(1,a+1):
    sum += i    
print(f"The sum of the first {a} positive integers is {sum}")

