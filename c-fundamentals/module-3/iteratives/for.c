#include <stdio.h>

int main(void) {
  for (int i = 1; i < 5; i++) {
    printf("%d\n", i);
  }

  int sum = 0;
  int n = 5;
  int i;

  for (i = 1; i < n; i++) {
    sum += i;
  }
  printf("sum: %d, i: %d\n", sum, i);
}
