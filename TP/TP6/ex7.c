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

    char voy[12] = "aeiouyAEIOUY";
    int check, length = strlen(line);
    for (int i = 0; i < strlen(line); i++)
    {
        check = 0;
        for (int j = 0; j < 12; j++)
        {
            if (line[i] == voy[j])
            {
                for (int k = i; k < strlen(line); k++)
                {
                   line[k] = line[k+1] ;  
                }
            }
        }
    }
    printf(line) ; 

    return 0;
}