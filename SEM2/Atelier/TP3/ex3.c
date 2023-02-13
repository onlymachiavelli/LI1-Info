#include <stdio.h> 


int main () {


    int arr[10] ;
    //filling the array !
    for (int i= 0; i< 10 ; i++) {
        printf("Enter The data ! \n") ; 
        scanf("%d" , &arr[i]) ; 

    }

    int min = arr[0] , max = arr[0] ; 
    for (int i =0; i< 10; i++) {
        if (arr[i] > max) {
            max = arr[i]  ;
        } 
        if (arr[i] < min) {
            min = arr[i] ; 
        }
    }

    printf("The max is %d and the min is %d \n" , max , min) ;

    return 0 ; 
}