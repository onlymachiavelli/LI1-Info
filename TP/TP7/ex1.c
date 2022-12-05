#include <stdio.h>

int isEven(int number)
{
    return number % 2 != 0;
}

int main()
{

    printf("%d", isEven(5));
    return 0;
}