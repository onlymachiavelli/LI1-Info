#include <stdio.h> 


int main () {
    int n ; 
    printf("Enter The length  \n") ; 
    scanf("%d", &n) ;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        printf("Enter The %d element \n", i+1) ; 
        scanf("%d", &arr[i]) ; 
    }
    
    //holds the first elements ! 
    
    int *p = arr ; 
    int sum = 0 ; 
    for (int i = 0; i < n; i++)
    {
        sum += *p ; 
        p++ ; 
    }
    printf("sum = %d", sum) ;
    

    return 0 ; 
}