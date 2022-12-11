#include <stdio.h>
#include <string.h>

int main()
{
    char line[100];

    int spaceCount;
    do
    {
        spaceCount = 0;
        printf("Enter the line ! \n");
        gets(line);

        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] == ' ')
                ++spaceCount;
        }

    } while (spaceCount == 0);
    char words[20][100];
    int k = 0;
    int index = 0;
    int check = 1;

    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] != ' ')
        {
            words[index][k] = line[i];
            ++k;
        }
        else
        {
            printf("%s\n", words[index]);
            words[index][k] = '\0';

            k = 0;
            index++;
        }
    }

    if (words[index][0] != words[index][k - 1])
    {
        check = 0;
    }

    if (check)
    {
        printf("Totallogramme ! ");
        return 0;
    }
    printf("Not Totallogramme ! ");
    return 0;
}