#include <stdio.h> 


int main () {


    int arr[5] = {1,2,3,4,5} ; 
    int *p = arr , sum=0;
    for (int i =0; i< 5 ;i++) {
        sum += *p ; 
        p++ ;
    }

    printf("sum = %d", sum );
    return 0; 
}