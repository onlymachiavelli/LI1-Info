#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


void hello(int signal) {
    printf("\nhello Received %d signal \n", signal) ;

    exit(1); 
}

void world(int signal) {
    printf("\nworld Received %d signal \n", signal);
    exit(1);
}
int main () {
    while (1){
        printf("Hello fcker ! \n");
        signal(SIGINT, hello);
        signal(SIGTSTP, world) ;
        sleep(1) ; 
    }
    printf("End of the software ! \n") ;

    return 0 ; 

}