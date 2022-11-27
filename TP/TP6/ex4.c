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
    char v[6][3] = {
        "e",
        "es",
        "e",
        "ons",
        "ez",
        "ent"};

    for (int i = 0; i < 6; i++)
    {
        printf("\n");
        for (int j = 0; j < strlen(verb) - 2; j++)
        {
            printf("%c", verb[j]);
        }
        printf("%s", v[i]);
    }
    return 0;
}