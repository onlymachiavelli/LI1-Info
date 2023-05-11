//process controller 

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main (){

    pid_t process ; 
    int stay = 1;
    while (stay) {
        while (1) {
            printf("Enter a process id ! \n"); 
            scanf("%d", &process); 
            if (kill(process, 0) == 0) break;
        }
        printf("So,\n1->Pause the process\n2->Resume the process\n3->KILL THE PROCESS\n");
        int option =0;  
        while (option >3 || option<1) {
            printf("Enter option\n");
        }
        char *err = "An error occured ! \n"; 
        switch (option) {
            case 1:
                printf(kill(process, SIGSTOP) == 0 ? "Done pausing the proces \n" : err) ;
                break; 
            case 2 : 
                printf(kill(process, SIGCONT) == 0 ? "Done resuming the process \n" : err );
                break;
            case 3:
                printf(kill(process, SIGKILL) ==0? "Done killing the process \n" : err);
                break; 
        }

        printf("You still want to stay ? 0->no else ->yes\n") ;
        scanf("%d", &stay); 
    }
}