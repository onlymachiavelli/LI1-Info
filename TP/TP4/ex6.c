#include <stdio.h>

int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of index %d \n", i);
        scanf("%d", &arr[i]);
    }

    int i, v;
    printf("Enter the index ");
    do
    {
        printf("Enter The selected index ! \n");
        scanf("%d", &i);
    } while (i > 9 || i < 0);

    printf("Enter the value ! \n");
    scanf("%d", &v);

    return 0;
}