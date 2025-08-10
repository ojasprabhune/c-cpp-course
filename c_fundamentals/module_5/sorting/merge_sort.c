#include <stdio.h>

void print_array(int num, int data[], char *str);
void merge(int a[], int b[], int c[], int num);
void merge_sort(int key[], int num);

int main(void) {
  int a[] = {99, 93, 82, 77, 64, 72, 82, 95, 95, 103, 47, 86, 97, 89, 82, 96};
  int num = sizeof(a) / sizeof(a[0]);
  print_array(num, a, "My grades:\n");
  printf("\n\n");
  merge_sort(a, num);
  print_array(num, a, "My sorted grades:\n");
  printf("\n\n");

  return 0;
}

void print_array(int num, int data[], char *str) {
  printf("%s", str);
  for (int i = 0; i < num; i++) {
    printf("%d\t", data[i]);
  }
}

// merge a and b into c
void merge(int a[], int b[], int c[], int num) {
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < num && j < num) {
    if (a[i] < b[j]) {
      c[k++] = a[i++];
    } else {
      c[k++] = b[j++];
    }
  }
  while (i < num) {
    c[k++] = a[i++];
  }
  while (j < num) {
    c[k++] = b[j++];
  }
}

// key means current item being sorted
// a power of 2
void merge_sort(int key[], int num) {
  int w[num];
  for (int k = 1; k < num; k *= 2) {
    for (int j = 0; j < num - k; j += 2 * k) {
      merge(key + j, key + j + k, w + j, k);
    }
    for (int j = 0; j < num; j++) {
      key[j] = w[j];
    }
  }
}
