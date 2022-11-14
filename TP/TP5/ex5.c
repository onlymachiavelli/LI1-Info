#include <stdio.h>

int main()
{

    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the value of the matrix \n ");
            scanf("%d", &matrix[i][j]);
        }
    }

    // printing the matrix
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ,", matrix[i][j]);
        }
        printf("\n");
    }
    // printing the even rows
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%d ,", matrix[i][j]);
            }
            printf("\n");
        }
    }
    // printing the odd elements in every row !
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (j % 2 != 0)
            {
                printf("%d ,", matrix[i][j]);
            }
        }
        printf("\n");
    }
    int check = 1;

    // the diagonals

    // diagonal left
    int ele;

    for (int i = 0; i < 5; i++)
    {

        printf("%d , ", matrix[i][i]);
    }

    int j = 4;
    for (int i = 0; i < 5; i++)
    {
    }
    return 0;
}