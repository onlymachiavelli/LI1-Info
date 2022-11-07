#include <stdio.h>

int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the element of %d\n", i);
        scanf("%d", &arr[i]);
    }

    int asc = 1, desc = 1, cnst = 1;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cnst = 0;
            if (arr[i] < arr[i + 1])
                desc = 0;
            else
                asc = 0;
        }
        else
        {
            asc = 0;
            desc = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", arr[i]);
    }
    if (!asc && !desc && !cnst)
    {
        printf("This array is mixec , not asc not desc and nost const \n");
    }
    else
    {
        if (asc)
        {
            printf("This array is ascending \n");
        }
        if (desc)
        {
            printf("This array is descending \n ");
        }
        if (cnst)
        {
            printf("This array is constant with the value %d \n", arr[0]);
        }
    }
    return 0;
}
