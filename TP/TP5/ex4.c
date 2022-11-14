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
    printf("enter the length \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value of index %d\n", i);
        scanf("%d", &arr[i]);
    }

    int max = 0, min = arr[0], iMin = 0, iMax, check = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            iMax = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            iMin = i;
        }
    }

    printf("The array is : \n");
    printArr(n, arr);
    printf("\n");
    printf("the min is %d with index %d and the max is %d with index %d", min, iMin, max, iMax);

    return 0;
}