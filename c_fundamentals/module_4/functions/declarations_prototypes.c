#include <stdio.h>

// prototype
double cube(double);

int main(void) { printf("This is the cube of 3.5: %lf\n", cube(3.5)); }

double cube(double x) { return x * x * x; }
