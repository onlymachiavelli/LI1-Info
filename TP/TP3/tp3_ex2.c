#include <stdio.h>
void main()
{
    float a, b, x;
    printf("Enter a and b \n");

    scanf("%f %f", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Infinite solutions \n");
        }
        else
        {
            printf("There's no solution");
        }
    }
    else
    {
        x = -b / a;
        printf("The solution = %.3f \n", x);
    }
}