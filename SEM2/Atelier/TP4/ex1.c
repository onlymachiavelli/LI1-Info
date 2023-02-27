#include <stdio.h>
int main () {

    //fill the matrix 

    int n, m ;
    printf("Enter the size of the matrix : \n");

    scanf("%d",&n);
    scanf("%d",&m);

    int matrix[n][m] ;
    for (int i =0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            printf("Enter the data of the current index \n") ;
            scanf("%d",&matrix[i][j]) ;

        }
    }
    int sum = 0;
    for (int i = 0 ; i< n;i++) {
        for (int j = 0; j<m;j++) {
            printf("%d ," , matrix[i][j]) ; 
            sum += matrix[i][j] ; 
        }
        printf("\n");
    }
        printf("\n");
    for (int i = 0 ; i< m;i++) {
        for (int j = 0; j<n;j++) {
            printf("%d ," , matrix[j][i]) ; 
        }
        printf("\n");
    }
        printf("\n");
    printf("The sum is %d " , sum) ; 


}