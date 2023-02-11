#include <stdio.h> 

int main () {


    int length ; 
    printf("Enter The length  \n") ;
    scanf("%d", &length) ;
    int arr[length] ;
    int *arrPointer = arr ; 
    //fill the array ! 

    for (int i = 0; i < length; i++)
    {
        printf("Enter The %d element \n", i+1) ; 
        scanf("%d", &arr[i]) ; 
    }

      for (int i = 0; i < length; i++)
    {
        printf("%d ", arrPointer[i]) ; 
         
    } 
    printf("\n") ; 

    int x ; 
    printf("Enter the cancelled element ! \n") ; 
    scanf("%d", &x) ;
    int *xPointer = &x ; 
    int newLength = length; 
    for (int i =0; i< length; i++) {
        if (*xPointer == *arrPointer) {
            int *secp = arrPointer ; 
            for (int j =i; j< length-1; j++) {
                *secp = *(secp+1) ;
                secp++ ;

            }
            --newLength ; 

        }
        arrPointer++ ; 
    }
    //print the array 
    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", arrPointer[i]) ; 
         
    }

    return 0; 
}