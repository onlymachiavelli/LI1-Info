#include <stdio.h>
#include <stdbool.h>

void cnt(int &shit)
{
    for (int i = 0; i > 6; i++)
    {
        shit++;
    }
}
int main()
{

    int thing = 0;
    cnt(&thing);
    printf("%d", thing);
}