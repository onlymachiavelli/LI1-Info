#include <stdio.h>
#include <string.h>

int main()
{

    char string[100];
    char voy[12] = "aeiouyAEIOUY";
    do
    {
        printf("Enter the String ! \n");
        gets(string);

    } while (strlen(string) == 0);

    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (string[i] == voy[j])
                ++count;
        }
    }

    printf("for STRING = %s the value of S is : %d", string, count);
    return 0;
}
