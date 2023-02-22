#include <stdio.h>


int main () {

    
    //initialization 

    int a=1,b=2, c=3 ; 
    //pointers 
    int *p1 = &a;
    int *p2 = &c;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p1 = *p2;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    (*p2)++ ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p1  = p2 ;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p2 = &b ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p2=*p1-2**p2 ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    (*p2)-- ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p1 = *p2-c ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    a=(2+*p2)**p1 ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p2 = &c ;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p2=*p1/ *p2 ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p1=a+ b ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    a+=*p1 ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    b=*p1+*p2; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p1=2*a ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    a=*p2 ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p2=*p1-*p2 ;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p1=1-c ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    *p2+=*p1+a ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p2=p1=&a ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p2++ ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p1+=2 ;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    c=p2==&c ; 
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 
    p1=NULL ;
    printf("a = %d b= %d c = %d and *p1 = %d and *p2 = %d p1 = %p and p2 = %p \n", a, b,c, *p1, *p2, p1, p2) ; 





    return 0 ; 
}