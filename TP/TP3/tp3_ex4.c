#include <stdio.h>
int main()
{
    float a, b;
    char operator;
    printf("Enter a and b  \n");
    scanf("%f %f", &a, &b);
    printf("Enter the operator ! \n");
    scanf("%s", &operator);

    switch (operator)
    {
    case '/':

        printf("%f %c %f = %f", a, operator, b, a / b);
        break;
    case '+':
        printf("%f %c %f = %f", a, operator, b, a + b);
        break;
    case '-':
        printf("%f %c %f = %f", a, operator, b, a - b);
        break;
    case '*':
        printf("%f %s %f = %f", a, operator, b, a * b);
        break;

    default:
        printf("invalid operator ! \n");
    }
    return 0;
}