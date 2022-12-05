#include <stdio.h>

int isEven(int number);

int main()
{
    int n;
    printf("Enter the number ! \n");
    scanf("%d", &n);
    printf("%d", isEven(n));
    return 0;
}

int isEven(int number)
{
    return number % 2 != 0;
}