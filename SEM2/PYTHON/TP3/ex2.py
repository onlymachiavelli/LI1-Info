


moy = 0 
count = 0 
while (True) :
    
    note = float(input("Enter note "))

    
    if (note>=0) :
        moy = moy + note
        count = count + 1
    else :
        break
moy /= count 
print(f"Moyenne of {count} subjects = {round(moy, 2)}")

