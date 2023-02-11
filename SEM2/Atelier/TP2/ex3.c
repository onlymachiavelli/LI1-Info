#include <stdio.h> 


int main () {


    int n ; 
    int arr[n] ; 
    printf("Enter n \n");
    scanf("%d", &n);
    for (int i =0; i< n ;i++) {
        scanf("%d", &arr[i]);
    }




    int *p = arr , sum=0;
    for (int i =0; i< n ;i++) {
        sum += *p ; 
        p++ ;
    }

    printf("sum = %d", sum );
    return 0; 
}