class Arrays:
    def __init__(self, array, length) :
        if len(self.array) != length :
            print("Error: length of array is not equal to length")
            exit() 
        #checking the type of the given array ! 
        try :
            for i in range (length) :
                self.array[i] = self.array[i]
        except :
            print("Error: the given thing is not an array ! ")
            exit()


        self.array = array
        self.length = length

    def initZero(self) :
        for i in range(self.length):
            self.array[i] = 0
    def bubSort(self) : 
        check = False 
        while (not check) :
            check = True 
            for i in range (self.length -1): 
                if (self.array[i] > self.array[i+1]) :
                    temp = self.array[i]
                    self.array[i] = self.array[i+1]
                    self.array[i+1] = temp
                    check = False
    def insertData (self) :
        self.length +=1 
        self.array.append(0)
    def deleteData (self, index) :
        if (index >= self.length) :
            print("Error: index out of range")
            exit()
        self.array.pop(index)
        self.length -= 1
    def insertDataAt (self, index, data) :
        if (index >= self.length) :
            print("Error: index out of range")
            exit()
        self.array.insert(index, data)
        self.length += 1
    def printArray(self):
        for i in range(self.length):
            print(self.array[i])
    