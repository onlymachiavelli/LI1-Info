#include <stdio.h>
#include <stdbool.h >

int min(int n, int arr[n])
{
    int mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}

int max(int n, int arr[n])
{

    int maxi = 0;
    for (int i = 0; i < n; i++)

    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int size(int min, int max)
{
    int n;
    scanf("%d", &n);
    if (n <= max && n >= min)
    {
        return n;
    }
    return size(min, max);
}
void fillArr(int n, int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        int data;
        printf("Enter the data of index %d", i);
        data = size(1, 100);
        arr[i] = data;
    }
}

void sort(int n, int arr[n])
{
    bool check = false;
    int swap;
    while (!check)
    {
        check = true;
        for (int i = 0; i < n; i++)
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

void showArr(int n, int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
}
void main()

{
    printf("Enter N \n");

    int n = size(1, 20);

    int arr[n];
    fillArr(n, &arr);

    printf("The max of your array is %d and the min of your array is %d \n ", max(n, arr), min(n, arr));
    sort(n, &arr);
    showArr(n, arr);
}
