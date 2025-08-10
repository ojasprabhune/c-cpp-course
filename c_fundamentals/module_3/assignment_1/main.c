#include <math.h> // has  sin(), abs(), and fabs()
#include <stdio.h>

int main(void) {
  double interval;
  int i;
  // the following code prints the sine of numbers from 0 to 3.0 in increments
  // of 0.1
  for (i = 0; i < 30; i++) {
    interval = i / 10.0;

    printf(
        "sin( %lf ) = %f \n", interval,
        fabs(sin(
            interval))); // fabs() is used to get the absolute value of the sine
  }

  printf("\n+++++++\n"); // i dont even know why this is here
  return 0;
}
