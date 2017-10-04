#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n\n");
  testStack();
  testQueue();
  printf("\nTests complete.\n");
}

// test to check for stack functionality
void testStack(){
  listElement* l = createEl("Test Stack (1).", 30);
  listElement* l2 = insertAfter(l,"Test Stack (2).", 30);
  listElement* l3 = insertAfter(l2,"Test Stack (3).", 30);
  printf("length: %d\n", length(l));
  listElement** lp = &l;
  //enqueue(lp, "Test Stack (4)", 30);
  printf("popping element...\n");
  pop(lp);
  printf("length now: %d\n", length(*lp));
  printf("pushing element...\n");
  push(lp, "Test Stack (4)", 30);
  printf("length now: %d\n\n\n", length(*lp)); 
}

// test to check for queue functionality
void testQueue(){
  listElement* l = createEl("Test Stack (1).", 30);
  listElement* l2 = insertAfter(l,"Test Stack (2).", 30);
  listElement* l3 = insertAfter(l2,"Test Stack (3).", 30);
  printf("length: %d\n", length(l));
  // list of pointers to structure pointers
  listElement** lp = &l;
  // traverse before dequeue
  printf("tranversing original...\n");
  traverse(l);
  // dequeue element
  printf("\ndequeue element...\n");
  dequeue(l);
  // traverse after dequeue
  printf("tranversing...\n");
  traverse(l);
  // check length
  printf("length now: %d\n", length(l));
  //enqueue element...
  printf("\nenqueue element...\n");
  enqueue(lp, "Test Stack (4)", 30);
  // ...then traverse again
  printf("tranversing...\n");
  traverse(l);  
  printf("length now: %d\n", length(*lp));
}
