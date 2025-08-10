#include <stdio.h>
int main(void) {
  int blanks = 0;
  int digits = 0;
  int total_chars = 0;
  int c = 0;

  for (; (c = getchar()) != EOF; total_chars++) {
    if (c == ' ') {
      ++blanks;
    } else if (c >= '0' && c <= '9') {
      ++digits;
    }
  }

  printf("Blanks = %d, digits = %d, and total characters = %d\n", blanks,
         digits, total_chars);

  return 0;
}
