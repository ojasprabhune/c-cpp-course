/*
 * A program that creates a linked list of chemical elements and their
attributes.
 * The user is prompted to input the name, symbol, and atomic weight of 10
elements.
 * The program then prints out the list of elements in reverse order of input.
 *
 * Sample input (copy paste):
 *
Hydrogen H 1.008
Helium He 4.0026
Lithium Li 6.94
Beryllium Be 9.0122
Boron B 10.81
Carbon C 12.011
Nitrogen N 14.007
Oxygen O 15.999
Fluorine F 18.998
Neon Ne 20.180
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
  char name[20];       // element name
  char symbol[3];      // element symbol
  float atomic_weight; // element atomic weight
} Element;

typedef struct Node {
  struct Element data; // stores the element
  struct Node *next;   // pointer to the next node
} Node;

int main(void) {
  Node *head = NULL; // start with empty list

  printf("Input the name, symbol, and atomic weight of 10 elements:\n");

  for (int i = 0; i < 10; i++) {
    Node *new_node = malloc(sizeof(Node));
    // read element info from user
    scanf("%s %s %f", new_node->data.name, new_node->data.symbol,
          &new_node->data.atomic_weight);

    new_node->next = head; // add new node to the front
    head = new_node;       // set head as front node
  }

  printf("\n\nList of elements in reverse order of input:\n\n\n");
  printf("Element        Symbol     Weight\n");
  printf("------------------------------------\n");

  // print list
  Node *current = head; // set a current node to the head in order to iterate

  // iterate through list of elements
  while (current != NULL) {
    // print element and attributes
    printf("%-15s%-11s%f\n", current->data.name, current->data.symbol,
           current->data.atomic_weight);
    printf("------------------------------------\n");
    current = current->next; // iterate to next node in linked list
  }

  return EXIT_SUCCESS; // EXIT_SUCCESS = 0
}
