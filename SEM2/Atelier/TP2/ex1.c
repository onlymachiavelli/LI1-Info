#include <stdio.h>


int main () {


    int a, b ;
    printf("Enter A \n");
    scanf("%d", &a);
    printf("Enter B \n");
    scanf("%d", &b);
    
    int *p1 = &a, *p2=&b;

    int sum = *p1 + *p2 ; 
    printf("sum = %d", sum );  
    return 0; 
}