/* fflush.c */
#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Loading: ");
  fflush(stdout); // Force "Loading: " to show up immediately

  for (int i = 0; i < 5; i++) {
    printf(".");
    fflush(stdout); // Force each dot to appear every second
    sleep(1);
  }

  printf(" Done!\n");
  fflush(stdout);
  printf("Loading: ");

  for (int i = 0; i < 5; i++) {
    printf("."); // No newline, so it stays in the buffer "truck"
    sleep(1);    // Wait 1 second
  }

  printf(" Done!\n"); // The \n finally pushes everything out
  return 0;
}
