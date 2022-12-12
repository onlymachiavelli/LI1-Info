#include <stdio.h>
#include <string.h>

int length(char line[]);

void Reverse(char line[]);
int main()
{

    char line[200];

    printf("Enter the string ! \n");

    gets(line);

    printf("The String is %s\n", line);
    // reversing the string
    Reverse(line);
    printf("After the reversing  , The String is %s\n", line);
    return 0;
}

int length(char line[])
{

    int len = 0;
    while (line[len] != '\0')
        ++len;

    return len;
}
void Reverse(char line[])
{
    char swap;
    for (int i = 0; i < length(line); i++)
    {
        swap = line[i];
        line[i] = line[length(line) - i - 1];
        line[length(line) - i - 1] = swap;
    }
}