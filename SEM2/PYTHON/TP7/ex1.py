#alaa;barka;20;admis


#fill the file append style 

def generate() :
    file = open("datas.txt" , "a")
    name = input("Enter name : ")
    lname = input("Enter last name : ")
    age = int(input("Enter age : "))
    decision = input("Enter decision : ('admis || ajourne || refusee ')")
    if name and lname and age > 18 and decision == "admis" or decision == "ajournee" or decision == "refusee" : 
        file.write(f"{name};{lname};{age};{decision}")
        print("done saving this row ")
    else :
        print("Didn't save this row because of the invalid given datas ! ")

    print("do you want to continue ? (y/n)")
    choice = input()
    if choice == "y" :
        file.close()
        generate()
    file.close()



def admis():
    source = open("datas.txt", "r") 
    dest = open("admis.txt", "w")
    for line in source:
        if "admis" in line:
            dest.write(line)
    source.close()
    dest.close()


generate()
admis()


