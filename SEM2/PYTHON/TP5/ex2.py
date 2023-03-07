

def notIn(obj : str, target:str) -> bool :
    for char in obj :
        if target == obj["char"] :
            return False 
        
    return True 
used = []
string = input("Enter the string : ") 

for char in string :
    for ch in string : 
        if char == ch: 
            if notIn(used, ch):
                used.append({
                    "char" : ch , 
                    "count" : 1 
                })
            else :
                for obj in used :
                    if obj["char"] == ch :
                        obj["count"] += 1 
                        break

for obj in used :
    print(obj["char"] + " : " + str(obj["count"]))