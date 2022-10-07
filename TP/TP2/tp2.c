#include <stdio.h>

void main()
{
    int x, y, swapp;
    printf("Enter X ! \n");
    scanf("%d", &x);
    printf("Enter Y! \n");
    scanf("%d", &y);
    printf("X = %d and Y = %d \n", x, y);
    swapp = x;
    x = y;
    y = swapp;
    printf("X = %d and Y = %d", x, y);
}
