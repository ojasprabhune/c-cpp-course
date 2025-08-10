#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ELEPHANT_SEAL_WT_MALE 8800
#define MIN_ELEPHANT_SEAL_WT_MALE 4400

// produce a macro that randomly generates a male weight

#define RANGE 4400
#define POPULATION 1000
#define WEIGHT_OVER rand() % RANGE
#define WEIGHT WEIGHT_OVER + MIN_ELEPHANT_SEAL_WT_MALE
#define FILL                                                                   \
  for (int i = 0; i < POPULATION; i++)                                         \
  data[i] = WEIGHT

void print_data(int d[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\t", d[i]);
    if ((i + 1) % 10 == 0) {
      printf("\n");
    }
  }
}

int main(void) {
  int data[POPULATION];
  srand(time(0));
  FILL;
  print_data(data, POPULATION);
  printf("\n");

  return 0;
}
