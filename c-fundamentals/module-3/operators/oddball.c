#include <stdio.h>
int main(void) {
  // syntax
  // condition ? expr : expr
  // expr1, expr2

  int a = 5;
  int b = 10;
  int c;

  c = (a < b) ? a : b;
  printf("%d\n", c);

  // is the same as

  if (a < b) {
    c = a;
  } else {
    c = b;
  }

  printf("%d\n", c);

  return 0;
}
