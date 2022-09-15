#include <stdio.h> ;

#include <stdbool.h>

void printFunc(int numbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", numbers[i]);
    }
}
void bubSort(int *numbers)
{

    bool check = false;
    while (!check)
    {
        check = true;
        for (int i = 0; i < 4; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                numbers[i], numbers[i + 1] = numbers[i + 1], numbers[i];
                check = false;
            }
        }
    }
}
int main()
{

    int arr[5] = {4, 66, 3254, 879, 3};
    bubSort(&arr);
    printFunc(arr);
    return 0;
}