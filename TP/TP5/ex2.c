#include <stdio.h>

void printArr(int n, int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
}
int main()
{

    int n;
    printf("Enter the lenght \n ");
    scanf("%d", &n);

    int vect1[n];
    int vect2[n];

    int sumMult = 0;
    printf("FILLING THE FIRST VECTOR ! \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the vect1 index %d \n", i);
        scanf("%d", &vect1[i]);
    }

    printf("FILLING THE SECOND VECTOR ! \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the vect2 index %d \n", i);
        scanf("%d", &vect2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sumMult += vect1[i] * vect2[i];
    }
    printf("(");
    printArr(n, vect1);

    printf(")*(");
    printArr(n, vect2);
    printf(")=");
    printf(" %d", sumMult);
    return 0;
}