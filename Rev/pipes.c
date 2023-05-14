#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>
#include <string.h>

int main () {

    int puffers [2];
    char buffer[100];

    int pipi = pipe(puffers) ;

    if (pipi == -1){
        printf("Error creating the pipe ! \n") ; 
    }
    else {
        pid_t prc = fork() ;
        if (prc == 0) {
            //write some datas !
            close(puffers[0]);
            char message[] = "hello world\n" ; 
            write(puffers[1] ,message, strlen(message)); 
            close(puffers[1]);
        }
        else {
            close(puffers[1]);
            read(puffers[0], buffer, sizeof(buffer)) ; 
            printf("the data is : %s" , buffer) ; 
            close(puffers[0]);
        }
    }

    return 0 ; 
}