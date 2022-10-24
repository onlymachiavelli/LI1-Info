#include <stdio.h>
int main()
{
    int n;
    printf("Enter N \n");
    scanf("%d", &n);
    n++;
    while (--n)
    {
        printf("%d\n", n);
    }
    return 0;
}