#include <stdio.h>

int find(int n, int arr[n], int target)
{

    for (int i = 0; i < n; i++)
    {

        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[5] = {
        1, 2, 3, 4, 5};
    int n;
    // n is the target here !
    printf("Enter the target value ! \n");
    scanf("%d", &n);
    printf("%d", find(5, arr, n));

    return 0;
}