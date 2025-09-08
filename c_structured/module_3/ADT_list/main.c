// singly linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int data;
  struct list *next;
} list;

int is_empty(const list *l) { return l == NULL; }

void print_list(list *h, char *title) {
  printf("%s\n", title);
  while (h != NULL) {
    printf("%d -> ", h->data);
    h = h->next;
  }
}

int main(void) {
  list *head = NULL;

  head = malloc(sizeof(list));
  printf("sizeof(list) = %lu\n", sizeof(list)); // unsigned long
  head->data = 5;
  head->next = NULL;
  print_list(head, "single element list");
  printf("\n");

  return 0;
}
