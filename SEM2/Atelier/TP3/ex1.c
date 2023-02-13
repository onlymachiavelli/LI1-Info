#include <stdio.h> 



int main () {



    int a  = 5 ; 
    int *c = &a ; 

    printf("a is %d, address of a is %p, and address of c is %p" , a , c , &c ) ; 

    return 0 ; 
}