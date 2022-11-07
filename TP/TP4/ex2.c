#include <stdio.h>

int main()
{

    int arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = i;

    int counter = 0;
    for (int i = 0; i < 100; i++)
    {
        printf("%d ,", arr[i]);
        counter++;
        if (counter == 10)
        {
            printf("\n");
            counter = 0;
        }
    }
    return 0;
}
