/* dynamic_alloc.c */
#include <stdio.h>
#include <stdlib.h>

int main() {

  int *arr;
  int largest_num;
  int array_size;
  printf("How many numbers array you need: ");
  scanf("%d", &array_size);

  arr = malloc(array_size * sizeof(int));

  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return -1;
  }

  for (int i = 0; i < array_size; i++) {
    printf("Enter the numbers: ");
    scanf("%d", arr + i);

    if (i == 0)
      largest_num = arr[i];

    else if (arr[i] > largest_num)
      largest_num = arr[i];
  }
  printf("Largest number is: %d", largest_num);

  free(arr);
  return 0;
}
