#include <stdio.h>
#include <string.h>

int length(char line[]);
int main()
{

    char line[200];

    printf("Enter the string ! \n");

    gets(line);

    printf("The length of %s is %d", line, length(line));
    return 0;
}

int length(char line[])
{

    int len = 0;
    while (line[len] != '\0')
        ++len;

    return len;
}