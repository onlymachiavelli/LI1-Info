#include <stdio.h>

void main()
{
    int a = 20, b = 5, c = -10, d = 2, x = 12, y = 15;
    printf("%d", (5 * x) + 2 * ((3 * b) + 4));

    printf("%d \n", (5 * (x + 2) * 3) * (b + 4));
    printf("%i \n", a == (b = 5));
    printf("%d \n", a += (x + 5));
    printf("%d \n", a != (c *= (-d)));
    printf("%d \n", a %= d++);
    printf("%d \n", a %= ++d);
    printf("%d \n", (x++) * (a + c));
    printf("%d \n", a = x * (b < c) + y * !(b < c));
    printf("%d \n", !(x - d + c) || d);
    printf("%d \n", a && b || !0 && c && !d);
    printf("%d \n", ((a && b) || (!0 && c)) && !d);
    printf("%d \n", ((a && b) || !0) && (c && (!d)));
}
