#include <stdio.h>
#include <string.h>

int isIn(char target[50] ,char o) {
    for (int i=0;i<strlen(target);i++) {
        if (target[i] == o) return 1 ; 
    }
    return 0;
}
int main () {

    //define the two strings    
    char str1[50] ;
    char str2[50];
    char used[50];
    int l= 0;
    //get the strings 
    scanf("%s", &str1); 
    scanf("%s", &str2);

    char *st1= str1;

    int found = 0;
    while (*st1 != '\0') {
        char *st2 = str2; 
        while (*st2 != '\0') {
            if (*st2 == *st1 && !isIn(used, *st1)) { 
                found = 1 ;
                break ; 
            }
            ++st2;
            
        }
        if (found) {
            used[l] = *st1;
            ++l;
            *st1=' '; 
            found = 0;
        }
        ++st1; 
        
    }
    char weird[50] ;
    strcpy(weird, str1);
    int length = strlen(weird); 
    char *w=weird;
    while (w <weird+strlen(weird) ) {
        if (*w==' ') {
            --length; 
            char *next = w+1;
            while (next < weird + strlen(weird)) {
                *(next-1) = *next; 
                ++next; 

            }
        }
        ++w;
    }
    weird[length+1] = '\0';
    strcpy(str1, weird) ; 
    printf("%s", str1) ;

    return 0;
}