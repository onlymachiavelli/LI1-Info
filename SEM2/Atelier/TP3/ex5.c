#include <stdio.h> 
#include <string.h>
int main () {


    char *word ; 
    //read the word 
    printf("Enter the word ! \n") ; 
    scanf("%s" , &word) ; 
    //checking if the word is palindrome using pointers 
    char *P1 = word ;
    char *P2 = word + strlen(word) -1  ; 
    //pointer of the middle character 
    char *Mid = word + strlen(word)/2 ;
    while (*P1 != *Mid || *P2 != *Mid) {

        if (*P1 != *P2) {
            printf("The word is not palindrome ! \n") ; 
            return 0 ; 
        }
        ++P1 ; 
        --P2 ;
    } 
    printf("The word is palindrome ! \n") ;
    
    

    return 0 ;

}