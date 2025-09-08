#include <stdio.h>
#include <stdlib.h>

typedef struct list {
  int data;
  struct list *next;
} list;

int is_empty(const list *l) { return l == NULL; }

list *create_list(int d) {
  list *head = malloc(sizeof(list));
  head->data = d;
  head->next = NULL;
  return head;
}

list *add_to_front(int d, list *h) {
  list *head = create_list(d);
  head->next = h;
  return head;
}

list *array_to_list(int d[], int size) {
  list *head = create_list(d[0]);
  for (int i = 1; i < size; i++) {
    head = add_to_front(d[i], head);
  }
  return head;
}

void print_list(list *h, char *title) {
  printf("%s\n", title);
  while (h != NULL) {
    printf("%d -> ", h->data);
    h = h->next;
  }
}

int main(void) {
  list *head = NULL;
  int data[6] = {2, 3, 5, 6, 7, 9};

  head = array_to_list(data, 6);

  print_list(head, "data[6] made into a multiple 6 element list");
  printf("\n");

  return EXIT_SUCCESS; // EXIT_SUCCESS = 0
}
