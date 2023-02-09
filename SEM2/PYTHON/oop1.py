class Person :
    def __init__(self, firstName, lastName, sex, height, age):
        self.firstName = firstName
        self.lastName = lastName
        self.sex = sex 
        self.height = height
        self.age = age

    def printAllDatas(self):
        print(self.firstName)
        print(self.lastName)
        print(self.height)
        print(self.age)
        print(self.sex)
        





Alaa = Person("Alaa", "Barka", "male", 1.76, 20)

print(Alaa.printAllDatas())