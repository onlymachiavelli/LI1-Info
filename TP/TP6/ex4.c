

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
        for (int j = 0; j < strlen(verb) - 2; j++)
        {
            printf("%c", verb[j]);
        }
        printf("%s", v[i]);
        printf("\n");
    }
    return 0;
}
/*

char verb[100];
    int check = 0;

    char v[6][3] = {
        "e",
        "es",
        "e",
        "ons",
        "ez",
        "ent"};
    do
    {

        printf("Enter the regular verb (in french )! \n");
        gets(verb);

        check = verb[strlen(verb) - 2] == 'e' && verb[strlen(verb) - 1] == 'r';
    } while (!check);

    for (int i = 0; i < strlen(verb) - 2; i++)
    {
        char word[100] = "";
        strcopy(word, verb);
        strcat(word, v[i]);
        printf("%s \n", word);
    }
    return 0;
}
*/
