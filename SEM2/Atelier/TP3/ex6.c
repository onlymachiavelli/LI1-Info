#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 50

int main () {


    //reading the strings 
    char word1[MAX_LENGTH] ; 
    char word2[MAX_LENGTH] ; 
    printf("Enter the word 1 \n") ; 
    scanf("%s", &word1 ); 
    printf("Enter the word 2 \n") ; 
    scanf("%s", &word2 ); 

    char *P1= word1 ; 
    int find = 0; 
    while (P1<word1+strlen(word1)){
         char *P2= word2; 
        while (P2<word2+strlen(word2)) {
            find = *P1==*P2 ; 
            if (find) {
                //remove the character 
                char *P3 = P2;
                while (P3<word2+strlen(word2)){
                    *P3 = *(P3+1); 
                    P3++; 
                }
                break;

            }
        }
    }
    //print the result 
    printf("The word 1 is %s \n", word1);
    printf("The word 2 is %s \n", word2);
    return 0;


}