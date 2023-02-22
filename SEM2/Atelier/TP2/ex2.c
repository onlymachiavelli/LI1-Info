#include <stdio.h> 


int main () {

    char a, b ;
    printf("Enter A \n");

    scanf(" %c", &a) ; 

    printf("Enter B \n");
    scanf(" %c", &b) ; 


    char *p1 = &a, *p2=&b;
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("A = %c \n", a);
    printf("B = %c \n", b);
    return 0; 
}

