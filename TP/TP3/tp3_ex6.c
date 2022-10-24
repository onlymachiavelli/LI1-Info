#include <stdio.h>
int main()
{

    int n;
    printf("Enter N ! \n");
    scanf("%d", &n);
    // using for loop !
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }
    // using while loop !
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        i++;
    }
    return 0;
}