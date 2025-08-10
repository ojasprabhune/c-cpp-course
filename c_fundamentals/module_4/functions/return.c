#include <stdio.h>
double cube(double x) { return x * x * x; }

int main(void) {
  double x;
  printf("Enter the number you want to cube: ");
  scanf("%lf", &x);
  printf("Your cubed number: %0.1lf\n", cube(x));
}
