#include <stdio.h>

int isEven(int number)
{
    return number % 2 != 0;
}

int main()
{

    printf("%d \n%d", isEven(6), isEven(5));
    return 0;
}