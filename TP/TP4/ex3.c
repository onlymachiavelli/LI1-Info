#include <stdio.h>

int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of index %d\n", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    printf("This is the array \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", arr[i]);
    }

    printf("\nThe min is %d and the max is %d", min, max);
    return 0;
}
