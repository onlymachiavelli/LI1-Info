#include <stdio.h>


int main () {

    
    //initialization 

    int a=1,b=2, c=3 ; 
    int line = 1; 
    //pointers 
    int *p1 = &a;
    int *p2 = &c;
    printf("line = %d : a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; 
    ++line;
    *p1 = *p2;
    printf("line = %d : *p1 = *p2; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    (*p2)++ ; 
    printf("line = %d : (*p2)++ ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p1  = p2 ;
    printf("line = %d : p1  = p2 ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p2 = &b ; 
    printf("line = %d : p2 = &b ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p2=*p1-2**p2 ; 
    printf("line = %d : *p2=*p1-2**p2 ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    (*p2)-- ; 
    printf("line = %d : (*p2)-- ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p1 = *p2-c ; 
    printf("line = %d : *p1 = *p2-c ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    a=(2+*p2)**p1 ; 
    printf("line = %d :  a=(2+*p2)**p1 ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p2 = &c ;
    printf("line = %d : p2 = &c ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p2=*p1/ *p2 ; 
    printf("line = %d : *p2=*p1/ *p2 ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p1=a+ b ; 
    printf("line = %d : *p1=a+ b ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    a+=*p1 ; 
    printf("line = %d : a+=*p1 ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    b=*p1+*p2; 
    printf("line = %d : b=*p1+*p2;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p1=2*a ; 
    printf("line = %d : *p1=2*a ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    a=*p2 ; 
    printf("line = %d : a=*p2 ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p2=*p1-*p2 ;
    printf("line = %d : *p2=*p1-*p2 ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p1=1-c ; 
    printf("line = %d : *p1=1-c ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    *p2+=*p1+a ; 
    printf("line = %d : *p2+=*p1+a ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p2=p1=&a ; 
    printf("line = %d : p2=p1=&a ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p2++ ; 
    printf("line = %d : p2++ ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p1+=2 ;
    printf("line = %d : p1+=2 ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    c=p2==&c ; 
    printf("line = %d : c=p2==&c ;  a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;

    p1=NULL ;
    printf("line = %d : p1=NULL ; a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", line,  a, b,c, *p1, *p2, p1, p2) ; ++line;


    printf("t") ; 



    return 0 ; 
}