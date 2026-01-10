/* malloc.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p;
  int numOfElements = 5;
  int *arr = malloc(numOfElements * sizeof(int));

  for (int i = 0; i < numOfElements; i++) {
    printf("Enter the number %d: ", i + 1);
    scanf("%d", (arr + i));
  }
  for (int i = 0; i < numOfElements; i++) {
    printf("%d ", arr[i]);
  }
  free(arr);

  p = malloc(sizeof(int));

  *p = 1000;

  printf("%d\n", *p);

  free(p);
  return 0;
}
