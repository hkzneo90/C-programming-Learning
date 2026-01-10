/* random.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int our_random_function(int max) {
  int x;

  x = rand() % max + 1; // Adding one to get a number from 1 - 10
  return x;
}

int main() {
  int random;

  srand(getpid());

  for (int i = 0; i <= 10; i++) {
    random = our_random_function(10);
    fflush(stdout);
    printf("%d ", random);
  }
  return 0;
}
