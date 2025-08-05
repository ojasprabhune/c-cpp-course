#include <stdio.h>

int main(void) {
  int speed;

  printf("\nEnter speed as an integer: ");
  scanf("%d", &speed);

  if (speed < 65)
    printf("\nNo speeding ticket.\n\n");
  else
    printf("\nSpeeding ticket.\n\n");

  return 0;
}
