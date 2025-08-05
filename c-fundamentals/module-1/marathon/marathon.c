// preprocessor command
// .h means an extension and header file
// included automatically with program
// also means preprocessed before compiled
#include <stdio.h>

// keyword int and returns integer
// main is where code is executed from
// void means argument list is empty
int main() {

  // declaration with initilization
  // miles and yards are identifiers
  int miles = 26, yards = 385;
  double kilometers;

  // need 1760.0 because yard / 1760 is integer divison
  // if so, there's an explicit conversion which takes the more extensive
  // type and makes the whole expression be of that type
  // and again, %lf means "long float" or a "double" which is 32 bits vs 64 bits
  kilometers = 1.609 * (miles + yards / 1760.0);
  printf("\nA marathon is %lf kilometers.\n\n", kilometers);

  return 0;
}
