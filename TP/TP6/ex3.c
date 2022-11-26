#include <stdio.h>
#include <string.h>

int main()
{

    char line[200];
    char list[10][200];
    char word[] = "";
    printf("Enter the words ! ");
    gets(line);
    int j = 0;

    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] == ' ')
        {
            list[j] = word;
        }
        else
        {

            word += line[i];
        }
    }
    return 0;
}