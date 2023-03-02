#include <stdio.h> 


int main () {

    int arr[10] ; 
    //filling the array ! 
    int *F = arr ; 
    while (F < 10+arr  ) {
        printf("Enter The data ! \n") ; 
        scanf("%d" , F) ; 
        ++F; 
    }

    int *Pr1 = arr ; 
    while (Pr1 < 10 + arr) {
        printf("%d , " , *Pr1) ; 
        ++Pr1 ;
    }
    printf("\n") ; 
    int *Pr3 = arr + 7 ;
    while (Pr3 < 10 + arr) {
        *Pr3 += 1 ; 
        ++Pr3 ;  
    }

    int *Prr = arr ; 
        while (Prr < 10 + arr) {
            printf("%d , " , *Prr) ; 
            ++Prr ;
        }

    return 0 ; 
}
