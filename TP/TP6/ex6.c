#include <stdio.h>
#include <string.h>

int main()
{

    char string[100];
    char voy[6] = "aeiouy";
    do
    {
        printf("Enter the String ! \n");
        gets(string);

    } while (strlen(string) == 0);

    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (string[i] == voy[j])
                ++count;
        }
    }

    printf("The total number of voys is : %d", count);
    return 0;
}