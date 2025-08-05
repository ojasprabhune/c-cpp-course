#include <math.h> // include -lm when compiling to tell compiler
                  // that we're using the math library
#include <stdio.h>

int main(void) {
  double angle, sine_value;

  printf("Enter angle in degrees: ");
  scanf("%lf", &angle);

  // convert degrees to radians
  angle = angle * (M_PI / 180.0);

  // calculate sine value
  sine_value = sin(angle);

  printf("Sine of the angle is: %lf\n", sine_value);
  return 0;
}
