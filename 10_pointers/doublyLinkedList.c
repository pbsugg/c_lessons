#include <stdio.h>

// basic model for a doubly linked list
// add *insert and *remove functions as well

// want to use the functionality of printing both ways, show you can print back and front

struct node
{

  int value;
  struct node  *prev;
  struct node  *next;


};

int main(void)
{

  struct node  n1, n2, n3, n4;


  n1.value = 1;
  n2.value = 2;
  n3.value = 3;
  n4.value = 4;

  n1.prev = 0;
  n1.next = &n2;

  n2.prev = &n1;
  n2.next = &n3;

  n3.prev = &n2;
  n3.next = &n4;

  n4.prev = &n3;
  n4.next = 0;

  printf("printing beginning to end\n");
  struct node  *listStart;
  listStart = &n1;

  while (listStart != (struct node *) 0 )
  {
    printf("%i\n", listStart->value);
    listStart = listStart->next;
  }

  printf("printing end to beginning\n");
  struct node  *listEnd;
  listEnd = &n4;
  while (listEnd != (struct node *) 0 )
  {
    printf("%i\n", listEnd->value);
    listEnd = listEnd->prev;
  }

}

struct node  *addNode(struct node  *listPtr, struct node  *entryToAdd, char direction[])
{

  return listPtr;
}


struct node  *removeNode(struct node *listPtr)
{

  return listPtr;

}