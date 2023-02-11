#include <stdio.h> 


int main () {

    char a, b ;
    printf("Enter A \n");
    a = getchar() ; 

    //add a getchar() after each scanf("%d") so i can read the second character ! 
    scanf("%d") ; 

    printf("Enter B \n");
    //getc
    b = getchar(); 


    char *p1 = &a, *p2=&b;
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("A = %c \n", a);
    printf("B = %c \n", b);

    

    

    return 0; 
}