#include <stdio.h>
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");
  char c = 'c';
  listElement* l1 = createEl(&c, sizeof(char), &printChar);
  traverse(l1);
  printf("\n");
  listElement* l2 = insertAfter(l1, "TEXT", sizeof(char*), &printString);
  traverse(l1);
  printf("\n");
  int a = 1;
  listElement* l3 = insertAfter(l2, &a, sizeof(int), &printInt);
  traverse(l1);
  int b = 100.00;
  listElement* l4 = insertAfter(l3, &b, sizeof(double), &printDouble);
  traverse(l1);
  printf("\n");

  printf("\nTests complete.\n");
}
