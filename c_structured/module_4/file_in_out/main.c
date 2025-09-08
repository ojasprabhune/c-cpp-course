#include <stdio.h>
#define MAX_HW 20

void read_data(FILE *ptr, int d[], int *size) {
  *size = 0;
  while (fscanf(ptr, "%d", &d[*size]) == 1) {
    (*size)++;
  }
}

void print_data(int d[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\t", d[i]);
    if ((i + 1) % 10 == 0) {
      printf("\n");
    }
  }
}

double average(int d[], int size) {
  double avg = 0;
  for (int i = 0; i < size; i++) {
    avg += d[i];
  }
  return avg / size;
}

int main(void) {
  int i, sz = MAX_HW;
  FILE *ifp; // input file pointer
  int data[MAX_HW] = {100, 0};

  ifp = fopen("myhw", "r");
  read_data(ifp, data, &sz);

  printf("My %d homework scores are:\n", sz);
  print_data(data, sz);
  printf("\nAverage score was %10f", average(data, sz));
  printf("\n\n");
  fclose(ifp); // exit leads to close - so not strictly needed
  return 0;
}
