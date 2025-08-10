#include <stddef.h>
#include <stdio.h>

double avg_grades(int num_grades, int grades[]);
void print_grades(int num_grades, int grades[]);

int main(void) {
  int grades[] = {98, 93, 87, 94, 103};
  int num_grades =
      sizeof(grades) /
      sizeof(grades[0]); // find length of array as sizeof returns byte size

  print_grades(num_grades, grades);
  printf("My average grade is %.2f.\n\n", avg_grades(num_grades, grades));
}

double avg_grades(int num_grades, int grades[]) {
  double sum = 0.0;
  for (int i = 0; i < num_grades; i++) {
    sum += grades[i];
  }
  return sum / num_grades;
}

void print_grades(int num_grades, int grades[]) {
  printf("I have %d grades.\n", num_grades);
  for (int i = 0; i < num_grades; i++) {
    printf("%d\t", grades[i]);
  }
  printf("\n\n");
}
