ARR DB 1,2,3,4,5,6

PROC MAIN 
    MOV SI, OFFSET ARR 
    MOV AH, [SI]
    ;SUPPOSING THAT AH IS THE MAX 
    

    MOV BL, 0
    JMP WHILE 

    WHILE :  
        INC BL 
        CMP BL, 5 
            JE BREAK 
        INC SI 
        
        CMP AH, [SI]
        JBE CHANGE

    CHANGE:
        MOV AX, [SI] 
        

    BREAK :
        HLT 
ENDP 