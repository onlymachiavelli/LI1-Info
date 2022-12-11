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
    int check = 1;

    for (int i = 0; i < strlen(line); i++)
    {
        
        int j = i + 1;
        while (line[j] != ' ')
        {
            j++;
        }
        if (line[j - 1] != line[i])
        {
            check = 0;
        }
    }
    if (check)
    {
        printf("The line %s is 'TOTALOGRAMME' \n", line);
    }
    else
    {
        printf("The line %s is not 'TOTALOGRAMME' \n", line);
    }

    return 0;
}