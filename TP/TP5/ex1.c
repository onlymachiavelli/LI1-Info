#include <stdio.h>

void printArr(int n, int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\n");
}
int main()
{

    int n;
    do
    {
        printf("Enter the Length \n");
        scanf("%d", &n);
    } while (n <= 0 || n > 50);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array of index %d", i);
        scanf("%d", &arr[i]);
    }
    printArr(n, arr);

    int newLength = n;
    int swapp;
    // looping searching for zeros
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = arr[i + 1];
            for (int j = i + 1; j < n - 1; j++)
            {
                swapp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swapp;
            }
            --newLength;
        }
    }
    printArr(newLength, arr);

    return 0;
}