#include <stdio.h>
#include <string.h>
#define SIZE 1000
#define EMPTY -1
#define FULL (SIZE - 1)

// create structure called stack and typedef it so that I can call stack
// instead of struct stack
typedef struct stack {
  char s[SIZE];
  int top;
} stack;

// use call by reference to change the original stack

void push(char c, stack *stk) {
  // increment the top of the stack and set the value of top to c
  stk->top++;
  stk->s[stk->top] = c;
}

char pop(stack *stk) {
  // access top value and return it before decrementing top
  return stk->s[stk->top--];
}

char top(const stack *stk) {
  // access top value and return it
  return stk->s[stk->top];
}

void reset(stack *stk) { stk->top = EMPTY; }
int empty(const stack *stk) { return stk->top == EMPTY; }
int full(const stack *stk) { return stk->top == FULL; }

int main(void) {
  stack char_stack;
  char *str = "helfs";
  char str_back[strlen(str)];

  reset(&char_stack);
  printf("Original is: %s\n", str);

  int i = 0;
  while (str[i] != '\0') {
    printf("%c\n", str[i]);
    push(str[i++], &char_stack);
  }

  i = 0;
  while (!empty(&char_stack) && i < 20) {
    str_back[i++] = pop(&char_stack);
  }

  printf("Reverse is: %s\n\n", str_back);

  return 0;
}
