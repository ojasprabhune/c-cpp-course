#include <stdalign.h>
#include <stdio.h>
void swap(int i, int j);
void swap_call_by_ref(int *i, int *j);

int main(void) {
  int a = 5;
  int b = 10;
  printf("%d, %d\n", a, b);

  // won't work
  swap(a, b);
  printf("%d, %d\n", a, b);

  // will work because calling by reference
  swap_call_by_ref(&a, &b);
  printf("%d, %d\n", a, b);

  return 0;
}

void swap(int i, int j) {
  int temp = i;
  i = j;
  j = temp;
}

void swap_call_by_ref(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}
