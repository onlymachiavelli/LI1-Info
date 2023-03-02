#include <stdio.h>

#include <string.h>
 int isPalindrome(char *str)
{
    int len = strlen(str) - 1;
    char *start = str;
    char *end = str + len ;
    while (end > start)
    {
        if (*start != *end)
            return 0;
        start++;
        end--;

    }
    return 1;
}
int main () {
    

    char *string ; 
    //get the string 
    printf("Enter a string : ");
    scanf("%s",string);
    
    if(isPalindrome(string))
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
    //check palindrome using pointer 
    
    return 0;

}

