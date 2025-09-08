/*
 * SAMPLE INPUT: 6 96 84 72 95 92 83
 * OUTPUT:
 * Size: 6
 * Data:   96      84      72      95      92      83
 * Average: 87.00
 * Max: 9
 *
 * Program to read integers from a file, calculate average and max, and write to
 * another file. First integer in the file indicates how many following integers
 * there are.
 */

#include <stdio.h>
#include <stdlib.h>

// read first number of file and find number of following values
int *read_data(FILE *fp, int *size) {
  *size = 0;              // first int
  rewind(fp);             // go to beginning
  fscanf(fp, "%d", size); // get first integer
  printf("Size: %d\n", *size);
  printf("Data:\t");

  int *data = malloc(*size * sizeof(int)); // allocate memory

  // get rest of numbers and add to data
  for (int i = 0; i < *size; i++) {
    fscanf(fp, "%d", &data[i]);
    printf("%d\t", data[i]);
  }

  return data;
}

void avg_max(int data[], int size, double *avg, int *max) {
  *max = data[0];     // initialize max
  long sum = data[0]; // initialize sum

  // loop through data to find sum and max
  for (int i = 1; i < size; i++) {
    int n = data[i];
    sum += n;
    // check for max
    if (n > *max) {
      *max = n;
    }
  }

  // calculate average
  *avg = (double)sum / size;
}

int main(int argc, char *argv[]) {
  FILE *ifp, *ofp; // input and output file pointers
  double avg;      // average
  int max;         // max
  int size;        // size of data

  // check for correct number of arguments
  if (argc != 3) {
    printf("Need executable, input file, and output file!\n");
    exit(1);
  }

  // read and write
  ifp = fopen(argv[1], "r+");
  ofp = fopen(argv[2], "w+");

  int *data = read_data(ifp, &size); // retrieve first number

  avg_max(data, size, &avg, &max); // calculate average and max

  // print neatly
  printf("\nAverage: %.2f\nMax: %d\n", avg, max);

  // close files
  fclose(ifp);
  fclose(ofp);

  return EXIT_SUCCESS;
}
