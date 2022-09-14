#include <stdio.h>

int main()
{

    int len;
    printf("Enter the length \n");
    scanf("%d", &len);

    int numbers[len];
    int ele;

    // filling the arr !

    for (int i = 0; i < len; i++)
    {
        printf("Enter the element ! \n");
        scanf("%d", &ele);
        numbers[i] = ele;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d \n", numbers[i]);
    }
}
