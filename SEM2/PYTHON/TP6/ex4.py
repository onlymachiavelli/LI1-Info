myString = input("Enter a string : ")
words = myString.split()

for word in words : 
    if word[0] == 'a' :
        print(word)