#include <stdio.h>
#include <string.h>

int main()
{

    // read the word

    char line[200];
    char arr[20][20];
    int index = 0, j = 0;
    int count;
    do
    {
        printf("Enter The Sentence ");
        gets(line);
        printf(line);
        for (int i = 0; i < strlen(line); i++)
        {
            // counting for spaces
            if (line[i] == ' ')
                ++count;
        }
    } while (count != 4);

    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] == ' ' || line[i] == '\0')
        {
            arr[index][j] = '\0';
            index++;
            j = 0;
        }
        else
        {
            arr[index][j] = line[i];
            j++;
        }
    }

    for (int i = 0; i <= index; i++)
    {
        printf("%s \n", arr[i]);
    }
    return 0;
}