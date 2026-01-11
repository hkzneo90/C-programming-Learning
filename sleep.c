#include <stdio.h>
#include <unistd.h>

int main() {

  printf("Wait while processing...");
  fflush(stdout);
  sleep(2);
  printf("Ok\n");
}
