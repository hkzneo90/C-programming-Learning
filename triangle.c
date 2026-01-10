/* triangle.c */
#include <stdio.h>

int area_triangle(int base, int height) {
  int area;
  area = (base * height) / 2;
  return area;
}
int main() {
  int base, height, area;

  printf("Base: ");
  fflush(stdout);
  scanf("%d", &base);

  printf("Height: ");
  fflush(stdout);
  scanf("%d", &height);

  area = area_triangle(base, height);
  printf("The area is %d cm2\n", area);

  return 0;
}
