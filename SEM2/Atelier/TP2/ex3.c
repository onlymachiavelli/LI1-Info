#include <stdio.h> 


int main () {
    int n ; 
    printf("Enter The length  \n") ; 
    scanf("%d", &n) ;
    int arr[n] ;
    int *p = arr ; 
    while(p < arr+n)
    {
        printf("Enter The element \n") ; 
        scanf("%d", p) ;  
        ++p ; 
    }
    
    
    int sum = 0 ; 
    int *p1 = arr;
    while (p1 < arr + n) {
        sum += *p1 ; 
        p1++ ; 
    }

    printf("The Sum is : %d" , sum) ; 
    

    return 0 ; 
}

