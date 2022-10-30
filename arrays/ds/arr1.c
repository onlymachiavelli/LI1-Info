#include <stdio.h>
#include <stdbool.h>
void sort(int n, int arr[n])
{
    bool check = false;
    while (!check)
    {
        check = true;
        int i, swap;
        for (i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
                check = false;
            }
        }
    }
}
int main()
{

    int n;
    printf("Enter the length \n ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element ! \n ");
        scanf("%d", &arr[i]);
    }

    sort(n, &arr);

    for (int i = 0; i < n; i++)
        printf("%d \n", arr[i]);
}