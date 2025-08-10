// standard in and out
// pre-process command brings in scanf (input) and printf (output)
#include <stdio.h>

// pre-processor token
#define PI 3.14159265

int main() {
  // identifiers
  double area = 0.0;
  double radius = 0.0; 

  // prompts user to enter radius
  printf("Enter radius: ");
  // %lf - use % then a format (double = lf, integer = D)
  // use ampersand before variable (parameter)
  scanf("%lf", &radius);

  // area formula (no special exponentiation, so repeated multiplication)
  area = PI * radius * radius;
  printf("Radius of %lf meters; area is %lf sq. meters\n", radius, area);

  return 0;
}
