;FINDING MAX IN ARRAY 

;DECLARING AN ARRAY 

ARR DB 1,2,3,4,5,6
;BEGINNING 

PROC MAIN 

    ;INDEX 
    MOV SI, OFFSET ARR


    ;first element 
    MOV AH, [SI]

    ;COUNTER 
    MOV BL, 1 

    ;LOOPING
    JMP COUNT 


    COUNT :
        INC SI 
        ADD AH, [SI]
        INC BL 
        CMP BL, 7
        JBE COUNT 




ENDP