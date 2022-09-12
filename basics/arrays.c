#include <stdio.h>

int main()
{

    srand(time(NULL));

    printf("the random number is ! %d \n", 1 + (rand() % (10 - 1)));
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }
    // default return
    return 0;
}