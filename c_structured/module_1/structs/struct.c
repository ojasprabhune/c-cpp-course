#include <stdio.h>
int main(void) {
  struct card {
    int pip;
    char suit;
  } my_card = {12, 's'};

  my_card.pip = 4;

  printf("My card pip is %d.\n", my_card.pip);
}
