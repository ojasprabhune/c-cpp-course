#include <stdio.h>

void swap(int *a, int *b);
void print_array(int num, int data[], char *str);
void bubble(int data[], int num);

int main(void) {
  int grades[] = {95, 92, 94, 103, 87};
  int num = sizeof(grades) / sizeof(grades[0]);

  print_array(num, grades, "My grades\n");
  printf("\n\n");
  bubble(grades, num);
  print_array(num, grades, "My sorted grades\n");
  printf("\n\n");

  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print_array(int num, int data[], char *str) {
  printf("%s", str);
  for (int i = 0; i < num; i++) {
    printf("%d\t", data[i]);
  }
}

void bubble(int data[], int num) {
  int move;
  for (int i = 0; i < num; i++) {
    print_array(num, data, "\ninside bubble\n");
    printf("i = %d, input any int to continue: ", i);
    scanf("%d", &move);
    for (int j = num - 1; j > i; j--) {
      if (data[j - 1] > data[j]) {
        swap(&data[j - 1], &data[j]);
      }
    }
  }
}
