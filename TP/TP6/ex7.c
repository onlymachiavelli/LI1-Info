#include <stdio.h>
#include <string.h>

int main()
{

    char line[100];
    do
    {
        printf("Enter the line ! \n");
        gets(line);
    } while (strlen(line) == 0);

    char voy[12] = "aeiouyAEIOUY";
    int check;
    char newString[100] = "";
    for (int i = 0; i < strlen(line); i++)
    {
        check = 0;
        for (int j = 0; j < 12; j++)
        {
            if (line[i] == voy[j])
            {
                check = 1;
            }
        }
        if (!check)
        {
            newString += line[i];
        }
    }

    return 0;
}