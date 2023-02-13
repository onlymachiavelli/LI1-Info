#include <stdio.h>


int main () {

    
    int arr [3] = {1,2,3} ; 
    int sum = 0; 
    //loop with pointer without for 
    int *p = arr ;
    while (p < arr + 3) {
        sum += *p ; 
        p++ ; 
    }
    printf("sum = %d " , sum ); 

    return 0 ; 
}