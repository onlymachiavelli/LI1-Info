#include <stdio.h>

#define Main int main

void fillArr(int n, int arr[])
{

    int random;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand(100 - 1)) + 1;
    }
}
Main()
{

    int arr[2] = {0, 1};
    shit(&arr);
    printf("%d", arr[0]);
    printf("\n %d", arr[1]);
    return 0;
}