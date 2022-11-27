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
    return 0;
}