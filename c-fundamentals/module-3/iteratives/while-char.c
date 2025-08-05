#include <stdio.h>

int main(void) {
  int blanks = 0;
  int digits = 0;
  int letters = 0;
  int others = 0;
  int c; // use for int value of character
  // getchar obtains, from standard input
  // EOF is end of file
  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++blanks;
    else if (c >= '0' && c <= '9')
      ++digits;
    else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
      ++letters;
    else
      ++others;

  printf("Blanks = %d, digits = %d, letters = %d, and others = %d.\n\n", blanks,
         digits, letters, others);

  return 0;
}
