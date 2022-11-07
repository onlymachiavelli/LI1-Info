#include <stdio.h>

int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of index %d \n", i);
        scanf("%d", &arr[i]);
    }

    int v, index = -1;
    printf("Enter the value V !\n");
    scanf("%d", &v);
    // Linear Search !

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == v)
        {
            index = i;
        }
    }

    if (index != -1)
    {
        printf("%d does exits in the array, exactly in index %d", v, index);
    }
    else
    {
        printf("%d Doesn't exist in the array ! ", v);
    }
    return 0;
}
