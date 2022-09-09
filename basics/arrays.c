#include <stdio.h>

int main()
{

    // declare array ! ;
    // arr of ints   !
    int *numbers;
    int n;
    printf("Enter the length ! \n");
    scanf("%d", &n);

    printf("%d", n);

    for (int i = 0; i < n; i++)
    {

        printf("%s %d \n", "Enter data of ", i);
        scanf("%d", numbers[i]);
    }
    printf("Printing all the datas ! \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", numbers[i]);
    }

    // default return
    return 0;
}