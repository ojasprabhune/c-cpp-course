#include <stdio.h>

int main() {
  int fahrenheit, celsius;

  printf("Please enter fahrenheit as an integer: ");
  // %d means int
  // ampersand means shove the double into the address of fahrenheit
  // the location of fahrenheit in memory
  scanf("%d", &fahrenheit);

  celsius = (fahrenheit - 32) /
            1.8; // silent conversions from int to double then back to int

  printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);

  return 0;
}
