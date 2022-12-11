


def firstSpace (begin , word) :
    for i in range (begin , len(word)) :
        if word[i] == " " :
            return i 

    return -1 


while (True) :
    word = input("Enter the word ! ") 
    spaces = 0
    for i in range(len(word)) :
        if word[i] ==" " :
            spaces +=1 

    if spaces > 0:
        break 





index = 0 
check = True 
while (index < len(word) and firstSpace(index , word) != -1) :
    space = firstSpace(index , word) 
    print(f"Comparing {i} == {space-1}")
    index = space+1

