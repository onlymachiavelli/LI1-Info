#include <stdio.h>

void ex_1_2()
{

    printf("ESSTHS");
}

void ex_1_5()
{
    printf("ESSTHS \n");
    printf("je suis en premiere annee ");
    printf("License Informatique \n");
}

void ex_2_2()
{
    printf("\nbonjour \0 ESSTHS");
    printf("\n Bonjour \a ESSTHS \n");
}

void ex_3_3()
{

    int a = 20, b = 5, c = -10, d = 2, x = 12, y = 15;
    printf("%d \n", (5 * x) + 2 * ((3 * b) + 4));

    printf("%d \n", (5 * (x + 2) * 3) * (b + 4));
    printf("%i \n", a == (b = 5));
    printf("%d \n", a += (x + 5));
    printf("%d \n", a != (c *= (-d)));
    printf("%d \n", a %= d++);
    printf("%d \n", a %= ++d);
    printf("%d \n", (x++) * (a + c));

    printf("%d \n", a = x * (b < c) + y * !(b < c));
    printf("%d the fuck !  \n", !(x - d + c) || d);
    printf("%d \n", a && b || !0 && c && !d);
    printf("%d \n", ((a && b) || (!0 && c)) && !d);
    printf("%d \n", ((a && b) || !0) && (c && (!d)));
}

void ex_4_3()
{
    int x, y, res;

    x = y = 6;
    res = x + y;
    printf("x=%i \t y= %i res = %i \n ", x, y, res);
    res = x++ + y;

    printf("x=%i \t y= %i res = %i \n ", x, y, res);
    res = ++x + y;
    printf("x=%i \t y= %i res = %i \n ", x, y, res);
    res = x-- + y;
    printf("x=%i \t y= %i res = %i \n ", x, y, res);
    res = --x + y;
    printf("x=%i \t y= %i res = %i \n ", x, y, res);
    res = x + y;
    printf("x=%i \t y= %i res = %i \n ", x, y, res);
}

void ex_5_2()
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
    printf("X = %d and Y = %d \n", x, y);
}
void main()
{

    printf("Ex 1 \n");
    ex_1_2();
    printf("\nEx 2 \n");
    ex_1_5();
    printf("Ex 3 \n");
    ex_2_2();
    printf("Ex 4 \n");
    ex_3_3();
    printf("Ex 5 \n");
    ex_4_3();
    printf("Ex 6 \n");
    ex_5_2();
}