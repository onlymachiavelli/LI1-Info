#include <stdio.h>

#define Main int main
Main()
{

    int t, x, y, result;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        result = y > x ? y - x : 0;
        printf("%d \n", result);
    }
    return 0;
}