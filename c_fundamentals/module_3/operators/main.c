#include <stdio.h>

int main(void) {
  int outside, weather;

  printf("\nEnter if outside (1 for yes, 0 for no): ");
  scanf("%d", &outside);

  printf("\nEnter if rain (1 for yes, 0 for no): ");
  scanf("%d", &weather);

  if (outside && weather)
    printf("\nPlease use an umbrella.\n");
  else
    printf("\nDress normally.\n\n");

  return 0;
}
