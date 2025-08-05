#include <stdio.h>

void wrt_very(int count) {
  while (count > 0) {
    printf("\nvery");
    count--;
  }
  printf(" much.\n\n");
}

int main(void) {
  int repeat = 0;

  printf("How strong is your love from 1 to 10? ");
  scanf("%d", &repeat);
  printf("\nI love you very");
  wrt_very(repeat);

  return 0;
}
