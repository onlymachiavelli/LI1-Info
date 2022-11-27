#include <stdio.h>
#include <string.h>

int main()
{
    char verb[20];
    int check = 0;
    do
    {

        printf("Enter the regular verb (in french )! \n");
        gets(verb);

        check = verb[strlen(verb) - 2] == 'e' && verb[strlen(verb) - 1] == 'r';

    }

    while (!check);

    // The process !
    return 0;
}