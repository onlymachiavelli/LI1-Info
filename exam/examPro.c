

#include <stdio.h>
#include <string.h>
#define Main int main

int indexOf(int begin, char line[100])
{

    for (int i = begin; i < strlen(line); i++)
    {
        if (line[i] == ' ')
            return i;
    }
    return -1;
}
Main()
{
    // getting the string

    char line[100];
    int countSpaces;

    do
    {
        printf("Enter the line ! \n");
        gets(line);
        countSpaces = 0;

        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] == ' ')
                ++countSpaces;
        }
    } while (countSpaces == 0);

    int index = 0, check = 1, space;

    do
    {
        space = indexOf(index, line) != -1 ? indexOf(index, line) : space + 1;
        printf("comparing %c == %c and %d == %d\n", line[index], line[space - 1], index, space - 1);
        index = space + 1;
    } while (index < strlen(line));
}

/*





#include <stdio.h>
#include <string.h>
#define Main int main

int indexOf(int begin, char line[100])
{

    for (int i = begin; i < strlen(line); i++)
    {
        if (line[i] == ' ')
            return i;
    }
    return -1;
}
Main()
{
    // getting the string

    char line[100];
    int countSpaces;

    do
    {
        printf("Enter the line ! \n");
        gets(line);
        countSpaces = 0;

        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] == ' ')
                ++countSpaces;
        }
    } while (countSpaces == 0);

    int interation = 0, index = 0;
    char a = line[0];
    char b;
    printf("%d", indexOf(6, line));
    while (interation != countSpaces)
    {
        b = line[indexOf(index, line) - 1];
        // printf("%d", a == b);
        interation++;
        index = indexOf(index, line) + 1;
        printf("comparing %d == %d \n", line[index], line[indexOf(index, line) - 1]);
    }
}

#include <stdio.h>
#include <string.h>

int checkString(char line[])
{
    int k = -1;
    for (int i = 0; i < strlen(line) + 1; i++)
    {
        if (line[i] == ' ')
        {
            if (line[i - 1] != line[k])
            {
                printf("Comparing %c == %c and ints %d == %d \n", line[i - 1], line[k + 1], k, i - 1);
                return 0;
            }
            printf("Comparing %c == %c and ints %d == %d \n", line[i - 1], line[k + 1], k + 1, i - 1);
            k = i;
        }
    }

    return 1;
}
int main()
{
    // readning the line

    char line[100];
    int countSpaces;
    int check = 1;

    do
    {
        printf("Enter the line ! \n");
        gets(line);
        countSpaces = 0;

        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] == ' ')
                ++countSpaces;
        }
    } while (countSpaces == 0);

    // doing the buisiness ;
    int k = 0, checky = 0;
    check = checkString(line);
    printf("%d", check);

    return 0;
}
*/