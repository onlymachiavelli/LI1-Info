#include <stdio.h> 




int main () {

    int n  ;
    printf("Enter length \n") ; 
    scanf("%d" , &n) ; 
    int arr[n] ; 
    for (int i =0 ; i< n ; i++) {
        printf("Enter element of index %d\n" , i) ;
        scanf("%d" , &arr[i]) ;  
    }
    int *p = arr +6  ; 
    printf("\n%d\n" , *p) ; 
    while (p < arr+3 ) {
        printf("%d , ", *p  ) ; 
    }
    
    for (int i =0 ; i< n; i++) {
        printf("%d , ", arr[i]  ) ;     
    }

   return 0 ; 
}