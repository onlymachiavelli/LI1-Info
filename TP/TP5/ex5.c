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
    int ele = matrix[0][0];
    printf("%d ,", matrix[0][0]);
    for (int i = 1; i < 5; i++)
    {
        if (ele != matrix[i][i])
        {
            check = 0;
        }
        printf("%d , ", matrix[i][i]);
    }
    printf("\n");

    int j = 3;
    printf("%d , ", matrix[0][4]);
    ele = matrix[0][4];
    for (int i = 1; i < 5; i++)
    {
        if (ele != matrix[i][j])
        {
            check = 0;
        }
        printf("%d ,", matrix[i][j]);
    }

    printf("\n");
    if (check)
    {
        if (matrix[0][0] != matrix[0][4])
        {
            check = 0;
            printf("NON");
        }
        else
        {
            printf("OUI");
        }
        else printf("NON");
    }

    return 0;
}