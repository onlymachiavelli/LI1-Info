#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int start;
  int end;
  int result;
} ThreadArgs;

void *factorial(void *arg) {
  ThreadArgs *args = (ThreadArgs *)arg;
  int result = 1;
  for (int i = args->start; i <= args->end; i++) {
    result *= i;
  }
  args->result = result;
  return arg;
}

int main() {
  int n, num_threads;
  printf("Enter N to be calculated ");
  scanf("%d", &n);
  printf("Enter Chunks Number \n");
  scanf("%d", &num_threads);

  pthread_t threads[num_threads];
  ThreadArgs args[num_threads];
  int chunk_size = n / num_threads;
  for (int i = 0; i < num_threads; i++) {
    args[i].start = i * chunk_size + 1;
    args[i].end = (i == num_threads - 1) ? n : (i + 1) * chunk_size;
    pthread_create(&threads[i], NULL, factorial, &args[i]);
  }

  int result = 1;
  for (int i = 0; i < num_threads; i++) {
    pthread_join(threads[i], NULL);
    result *= args[i].result;
  }

  printf("Result is :  %d\n", result);
  return 0;
}