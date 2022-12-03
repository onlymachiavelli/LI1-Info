#include <stdio.h>
#include <string.h>

int main()
{

    char name[100];
    printf("Enter Your name ! \n");
    gets(name);
    int i, count = 0;
    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] != ' ')
        {
            count++;
        }
    }

    printf("Your name is %s and the length of your name is ! %d", name, count);
    return 0;
}
