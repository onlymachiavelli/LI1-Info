#include <stdio.h>


int main () {



    char *days[7] = {
        "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday", "Sunday"
    } ; 


    int day = 0 ; 
    while (day < 1 || day > 7) {
        printf("Enter the day number ! \n") ;
        scanf("%d" , &day) ;
    }

    char **P = days ;
    P += day - 1 ;
    printf("The day is %s \n" , *P) ;

    return 0; 
}

