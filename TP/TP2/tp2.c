#include <stdio.h>
#define PI 3.14
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

    int x, y;
    printf("Swapp Enter X ! \n");
    scanf("%d", &x);
    printf("Enter Y! \n");
    scanf("%d", &y);
    printf("X = %d and Y = %d \n", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("X = %d and Y = %d \n", x, y);
}

void ex_1_6()
{

    float rayon;
    printf("Enter the R \n");
    scanf("%f", &rayon);

    float per = 2 * PI * rayon, surf = rayon * rayon * PI;

    printf("The perm is %f and the surface is %f", per, surf);
}

void ex_1_7()
{
    float math, algo, exam, ds, moy;
    printf("Enter the ds and the exam of math !  \n");
    scanf("%f", &ds, &exam);
    math = 0.4 * ds + 0.6 * exam;
    printf("Enter the ds and exam  of algo !  \n");
    scanf("%f", &ds, &exam);
    algo = 0.4 * ds + 0.6 * exam;

    moy = (math + algo) / 2;
    printf("Th moy is : %f", moy);
}

void ex_1_8()
{
    char thing;
    thing = getchar();

    putchar(thing);
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
    ex_1_6();
    ex_1_7();
    ex_1_8();
}

