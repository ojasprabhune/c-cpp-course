#include <math.h>
#include <stdio.h>

int main(void) {
  double x;

  // printing headers
  printf("x\t|\tsin(x)\t\t|\tcos(x)\n");
  printf("_________________________________________\n");

  // prints x value, sin(x) value, and cos(x) value
  // increment x from 0 to 1 by 0.1
  // evenly spaced out values using \t
  for (x = 0.0; x <= 1.0; x += 0.1) {
    printf("%0.1f\t|\t%0.6f\t|\t%0.4f\n", x, sin(x), cos(x));
  }
}
