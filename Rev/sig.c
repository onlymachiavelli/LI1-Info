#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int signal) {
    printf("Received signal %d\n", signal);
}

int main() {
    // Register the signal handler function
    signal(SIGSTOP, handler);

    // Send the SIGSTOP signal 10 times with a delay of 1 second
    for (int i = 0; i < 10; i++) {
        printf("Process %d\n", getpid());
        sleep(1);
        raise(SIGSTOP);
    }

    return 0;
}
