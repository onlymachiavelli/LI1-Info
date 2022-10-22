#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter a,b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("The max is a = %d", a);
        }
        else
        {
            printf("The max is c = %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("The max is b = %d", b);
        }
        else
        {
            printf("The max is c = %d", c);
        }
    }
    return 0;
}