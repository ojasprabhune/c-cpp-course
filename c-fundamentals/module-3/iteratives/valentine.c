#include <stdio.h>
int main(void) {
  int repeat = 0;

  printf("How strong is your love from 1 to 10? ");
  scanf("%d", &repeat);
  printf("\nI love you very ");

  while (repeat > 0) {
    printf("very ");
    repeat--;
  }

  printf("much.\n\n");

  return 0;
}
