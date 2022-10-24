#include <stdio.h>
int main()
{

    double r1, r2, r3;
    char plug;
    printf("Enter R1, R2 and R3 \n");
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    printf("Enter the PLug type ! \n p-parallel\n other-serie\n");
    scanf("%s", &plug);
    if (plug == 'p')
    {
        printf("The result is %f", (r1 * r2 * r3) / (r1 * (r2 + r3) + r1 * r3));
    }
    else
    {
        printf("The result is %f", r1 + r2 + r3);
    }
    return 0;
}