#include <stdio.h>
#define SIZE 5

int main() {
  int grades[SIZE] = {78, 89, 79, 98, 92};
  double sum = 0.0;
  // * means dereference while & address (opposite things)
  double *p_sum = &sum;

  printf("My grades are: \n");

  for (int i = 0; i < SIZE; i++) {
    printf("%d  ", grades[i]);
  }

  printf("\n\n");

  for (int i = 0; i < SIZE; i++) {
    sum += grades[i];
  }

  printf("My average grade is %.2f.\n\n", sum / SIZE);

  // casts the pointer c to an unsigned long integer type, converting the memory
  // address into a numerical representation
  printf("The sum is at %p, or %lu, and is %lf.\n", p_sum, (unsigned long)p_sum,
         *p_sum);
  printf("Grades are at %lu to %lu.\n", (unsigned long)grades,
         (unsigned long)grades + 5);

  return 0;
}
