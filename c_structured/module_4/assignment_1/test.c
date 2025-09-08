/* Open and read a file of integers into an array that is created with the first
integer telling you how many to read. So  4  9  11  12  15  would mean create an
int array size 4 and read in the remaining 4 values into data[]. Then compute
their average as a double and their max  as an int. Print all this out neatly to
the screen and to an output file named answer-hw3.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y)                                                              \
  (x > y ? x : y) // Here  I have created the MAX macro for finding the maximum
                  // value into the array

int main() {
  FILE *toRead = NULL,
       *toWrite = NULL; // Initialize the file pointer with the NULL

  toRead = fopen(
      "inputdata.txt",
      "r"); // Opening the inputdata.txt file for storing the elemnts in data[]

  toWrite = fopen("answer-hw3.txt", "w"); // Opening the answer-hw.txt file for
                                          // storing the final output in it.

  /* Element - variable is for finding all the available int elements in the
  file loop - variable is used for the displaying the specific element of array
  data[] prev_number - variable is used for stroing the previous element to find
  max */

  int element = 0, loop = 0, prev_number = 0, max = 0;

  /* Sum - variable is for finding sum  of all the elements in data[]
  average - variable is used for the finding the average of the array and store
  it into another file */

  double sum = 0, average = 0;

  int *data = NULL; // Data is the Dynamic memory for data[]. The pointer should
                    // be initialize with the NULL

  if (toRead == NULL) {
    printf("Getting an error while reading a file\r\n");
    exit(0); // exit from the main file as the file is not present
  } else {
    printf("File open sucessfully \r\n");
  }

  fscanf(toRead, "%d", &element);

  data = (int *)malloc(element * sizeof(int));

  for (; fscanf(toRead, "%d", &*(++data)) != EOF;) {
    max = MAX(prev_number, *(data));
    printf("Element %d: %d \r\n", loop, *(data));
    sum = sum + (double)(*(data));
    loop++; // loop is used to just print the element number. (optional)
    prev_number =
        *(data); // storing the data into previous data for checking max
  }
  average = sum / element;

  printf("Average - %f and MAX - %d", average, max);
  fprintf(toWrite, "Average - %f and MAX - %d", average, max);

  fclose(toRead);
  fclose(toWrite);
}
