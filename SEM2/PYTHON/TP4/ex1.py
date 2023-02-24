days = [
    "monday", 
    "tuesday", 
    "wednesday", 
    "thursday", 
    "friday", 
    "saturday", 
    "sunday"
]


for day in days :
    print(day)
print("day f = ",days[3])

days[0],days[len(days)-1] = days[len(days)-1], days[0] 

print(days)
for i in range (12):
    print(days[len(days)-1])

