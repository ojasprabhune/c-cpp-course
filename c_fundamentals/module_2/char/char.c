#include <stdio.h>

int main(void) {
  // single quote is char while double quotes are strings
  char c = 'a';
  printf("c in ASCII is %d\n", c);         // print char as int
  printf("c as the character is %c\n", c); // print char as char
  // add int to char to go next
  printf("three consecutive chars are: %c, %c, and %c\n", c, c + 1, c + 2);
  printf("three bell ring chars are '\a': %c%c%c\n", '\a', '\a', '\a');

  return 0;
}
