#include <pthread.h>
#include <stdio.h>
int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int mat2[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
volatile int matc[3][3];

volatile int ind = 0;
void *calc(void *arg) {
  if (ind < 3) {
    for (int i = 0; i < 3; i++) {
      matc[ind][i] = mat1[ind][i] + mat2[ind][i];
    }
    ++ind;
  } else {
    printf("Done Calculating ! \n");
    pthread_exit(NULL);
  }
}
int main() {
  pthread_t threads[3];
  int threadFunc[3];
  for (int i = 0; i < 3; i++) {
    pthread_create(&threads[i], NULL, calc, (void *)ind);
  }
  for (int i = 0; i < 3; i++) {

    pthread_join(threads[i], NULL);
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ,", matc[i][j]);
    }
    printf("\n");
  }
}
