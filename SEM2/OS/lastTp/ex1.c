#include <pthread.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

volatile int cakes = 8;

void *eat(void *arg) {
  if (cakes == 0) {
    printf("There's no cake!\n");
    pthread_exit(NULL);
  } else {
    --cakes;
    printf("%lu ate a piece! %d pieces remaining\n", pthread_self(), cakes);
    sleep(2);
  }
  pthread_exit(NULL);
}

int main() {
  // array of thread ids
  pthread_t thread_id[4];

  // creating the threads
  for (int i = 0; i < 4; i++) {
    pthread_create(&thread_id[i], NULL, eat, NULL);
  }

  // joining the threads
  for (int i = 0; i < 4; i++) {
    pthread_join(thread_id[i], NULL);
  }

  return 0;
}
