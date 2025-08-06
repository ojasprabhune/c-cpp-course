/* NOTE:
 * when compiling this program, run:
 *
 * gcc main.c data.c && ./a.out
 *
 * because the 1000 values are in the data.c file and are imported through the
 * data.h header
 * */

// import header file to import data
#include "data/data.h"
// standard library for input and output
#include <stdio.h>

// main function for compiler to run
int main(void) {
  // 1000 total weight values
  int num = 1000;
  // declare integer sum for total sum of elephant seal weights
  int sum;

  // iterate through each weight and add it to the sum
  for (int i = 0; i < num; i++) {
    // index the data for the loop and add the respective weight to the sum
    sum += data[i];
  }

  // print the integer average weight of the seals by dividing the sum
  // by the number of values to the terminal
  printf("The average weight of the seals is %d.\n", sum / num);
}
