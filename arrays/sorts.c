#include <stdio.h>
#include <stdbool.h>
#define Main int main

void fillArr(int n, int arr[])
{

    int random;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand(100 - 1)) + 1;
        srand(time(NULL));
    }
}

void printArr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void bubbleSort(int n, int *arr[])
{
    int swap;
    bool check = false;
    while (!check)
    {
        check = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // arr[i], arr[i + 1] = arr[i + 1], arr[i];
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
                check = false;
            }
        }
    }
}
Main()
{

    int theArr[10];
    fillArr(10, &theArr);
    printArr(10, theArr);
    bubbleSort(10, &theArr);
    printArr(10, theArr);

    return 0;
}