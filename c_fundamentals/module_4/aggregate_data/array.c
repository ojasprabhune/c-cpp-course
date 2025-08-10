#include <stdio.h>
#define SIZE 5

int main(void) {
  double sum = 0.0;

  int grades[SIZE] = {78, 67, 94, 99, 84};

  printf("My grades are: \n");

  for (int i = 0; i < SIZE; i++) {
    printf("%d  ", grades[i]);
  }

  printf("\n\n");

  for (int i = 0; i < SIZE; i++) {
    sum += grades[i];
  }

  printf("My average grade is %.2f.\n\n", sum / SIZE);

  return 0;
}
