#include <stdio.h>
#include <string.h>

int main()
{

    char word[100];
    printf("Enter the word !s\n ");
    gets(word);

    int i = 0;
    int check = 1;
    while (i < strlen(word) && word[i] == word[strlen(word) - i - 1])
    {
        ++i;
    }

    // checking pal !
    if (i == strlen(word))
    {
        printf("Palindrome ! ");
    }
    else
    {
        printf("Not palindrome ! ");
    }

    return 0;
}