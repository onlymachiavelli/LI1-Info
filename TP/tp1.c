#include <stdio.h>

#define Main int main

Main()
{

    int n = 4, m = 9;
    printf("The sum of %d and %d is :%d \n", n, m, n + m);
    printf("The Prod of %d and %d is :%d \n", n, m, n * m);

    // with real type vars

    float v = 4.20, w = 6.9;
    printf("The sum of %2.6f and %2.6f is :%2.6f \n", v, w, v + w);
    printf("The Prod of %2.6f and %2.6f is :%2.6f \n", v, w, v * w);

    // second ex
    int x = 69, y = 420;

    printf("The x is %d and the y is %d \n", x, y);
    int swapp = x;
    x = y;
    y = x;
    printf("Now after the swapp , The x is %d and the y is %d \n ", x, y);

    return 0;
}
