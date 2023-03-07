#include <stdio.h>


int main() {

    int n, m; 
    //read n and m 
    printf("Enter N ! \n ") ; 
    scanf("%d", &n); 
    printf("Enter M !\n"); 
    scanf("%d", &m); 
    int matrix[n][m];

    //fill the matrix 
    for (int i = 0; i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("Enter the value of the element %d %d \n", i, j);
            scanf("%d", &matrix[i][j]);

        }
    } 

    //show the matrixx 

    for (int i = 0; i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }

    //show the transposed of the matrix 
    for (int j=0;j<m;j++) {
        for (int i = 0; i<n;i++) {
            printf("%d ", matrix[i][j]);

        }
        printf("%\n");
    }

    //calculate the sum 

    int sum = 0; 
    for (int i= 0 ;i<n;i++) {
        for (int j=0;j<m;j++) sum += matrix[i][j];
     }

    printf("The sum of the matrix is %d \n", sum);
    
    return 0 ; 
    
    
}
