#include <stdio.h> 






int main () {


    //read the length 
    //fill array 

    int n = 0 ; 

    while (n <= 0) {
        printf("Give N !\n") ;
        scanf("%d" , &n) ; 


    } 


    //fill arr 1 

    int arr[n] ; 

    for (int i=0; i< n; i++) {
        arr[i]= NULL ; 
        while (!arr[i]) {
            printf("Give the data of index %d\n", i) ; 
            scanf("%d" , &arr[i]) ;
        }

    }


    int x ; 
    printf("Enter the X \n")  ; 
    scanf("%d" , x); 



    //my array pointer 
    int *p1 = arr ; 
    int check = 0 ; 
    int newLength = n ;  



        for (int i =0; i< n-1; i++) {
            if (*p1 == x) {
                --newLength; 
                int *p2 = p1+ 1 ; 
                for (int j=i+1 ; j< n-1;j++) {
                    p2 = p2+1; 
                }
            }
        }

    

    for (int i =0; i<newLength;i++) {
        printf("%d , " , arr[i]);  
    }
    
    

    return 0 ; 
}