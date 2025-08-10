#include <stdio.h>
long fibonacci(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(void) {
  int n = 0, i;
  printf("Fibonacci table up to n: ");
  scanf("%d", &n);
  printf("\nFibonacci sequence:\n");

  for (int i = 0; i < n; i++) {
    printf("%d\t %ld\n", i, fibonacci(i));
  }
}
