#include <stdio.h>

#define Main int main

void shit(int *arr)
{
    arr[0] = 69;
}

Main()
{
    int arr[2] = {0, 1};
    shit(&arr);
    printf("%d", arr[0]);
    printf("\n %d", arr[1]);
    return 0;
}