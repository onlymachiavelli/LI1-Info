#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    char word[100];
    printf("Enter the word!\n");
    gets(word);
    int sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'o' || tolower(word[i]) == 'i' || tolower(word[i]) == 'u' || tolower(word[i]) == 'e' || tolower(word[i]) == 'y')
        {
            for (int j = 0; j < 26; j++)
            {
                if (tolower(word[i]) == alpha[j])
                {
                    printf("%c \n", word[i]);
                    sum += (i + 1) * (j + 1);
                }
            }
        }
    }
    printf("The net shit is : %d", sum);
    return 0;
}