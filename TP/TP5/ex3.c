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

    int n, pos = 0, neg = 0;
    do
    {

        printf("Enter the Length ! \n");
        scanf("%d", &n);

    } while (n <= 0 || n > 50);
    int arr[n];
    int posArr[n];
    int negArr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter The value of index %d", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            posArr[pos] = arr[i];
            ++pos;
        }
        else
        {
            negArr[neg] = arr[i];

            ++neg;
        }
    }

    printf("The array is : \n");
    printArr(n, arr);
    printf("\nThe postive array is : \n ");
    printArr(pos, posArr);
    printf("\nThe negative array is : \n");
    printArr(neg, negArr);
    return 0;
}