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
  struct node  *addNode(struct node  *currentNode, struct node  *entryToAdd, int index);

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




  // printf("printing end to beginning\n");
  // struct node  *listEnd;
  // listEnd = &n4;
  // while (listEnd != (struct node *) 0 )
  // {
  //   printf("%i\n", listEnd->value);
  //   listEnd = listEnd->prev;
  // }


// add starting node
struct node  *listStart;
listStart = &n1;

struct node  entry = {50, 0, 0};
struct node  *entryToAdd = &entry;

addNode(listStart, entryToAdd, 3);


printf("printing beginning to end\n");

while (listStart != (struct node *) 0 )
{
  printf("%i\n", listStart->value);
  listStart = listStart->next;
}

}

// add entry at certain point in node, after *index*
// link up before and after indexes properly
// "currentNode" is the node where you start traversing the list
struct node  *addNode(struct node  *currentNode, struct node  *entryToAdd, int index)
{
  int counter = 0;
  struct node  *nextNode = currentNode->next;
  while (counter != index)
  {
    currentNode = currentNode->next;
    ++counter;
  }

  // protect against end of node situation with if statement
  if (currentNode->next != (struct node *) 0)
  {
    nextNode = currentNode->next;
    nextNode->prev = entryToAdd;
    entryToAdd->next = nextNode;
  }

  currentNode->next = entryToAdd;
  entryToAdd->prev = currentNode;

  return entryToAdd;
}

// remove entry specified in argument
// begin, traverse the list until you get to its entry
//  remove "next" pointer from before
// remove "prev" pointer from after
// link to two pointers from before and after up with one another
struct node  *removeNode(struct node  *listStart, struct node *entryToRemove)
{

  return listStart;

}
