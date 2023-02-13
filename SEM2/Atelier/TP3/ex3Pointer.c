#include <stdio.h> 


int main () {

    int arr[10] ;
    //filling the array !
    int *Fill = arr ;
    while (Fill < arr+10) {
        printf("Enter The data ! \n") ; 
        scanf("%d" , Fill) ; 
        ++Fill ; 
    }


    int *P = arr ; 
    int max = *P , min = *P ; 
    while (P< arr+10) {
        if (*P > max) {
            max = *P  ;
        } 
        if (*P < min) {
            min = *P ; 
        }
        ++P ; 
    }

    printf("The max is %d and the min is %d \n" , max , min) ;
    
    return 0; 
} 