#include <stdio.h>

#define PI 3.14159

int main(void) {
  int radius;

  printf("Enter radius: ");
  scanf("%d", &radius);
  printf("Volume is: %g \n\n", 4 * radius * radius * radius / 3.0);
  return 0;
}
