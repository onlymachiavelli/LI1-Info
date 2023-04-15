myString = input("Enter a string : ") 

words = myString.split() 

longest = words[0]

for word in words :
    if len(longest) < len(word) :
        longest = word

print(longest)