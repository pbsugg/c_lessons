// functions to remove entries from a linked list
#include <stdio.h>



struct entry
{
  int value;
  struct entry  *next;

};

int main(void)
{

  struct entry  *removeEntry(struct entry  *listPtr);
  struct entry  *getNext(struct entry  *currentNode);
  // set existing node values
  struct entry n1, n2, n3, n4;

  n1.value = 30;
  n2.value = 40;
  n3.value = 50;
  n4.value = 60;

  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = 0;


  // pointer to go through list and get the first node
  struct entry  *startPointer;
  startPointer = &n1;

  struct entry  *listPtr;
  listPtr = removeEntry(startPointer);

  // see what new node looks like;

  while (startPointer != (struct entry *) 0 )
  {
    printf("Entry %i.\n", startPointer->value);
    startPointer = startPointer->next;
  }


}


// Remove last entry in a list, only need one argument because always grabbing it at the end

// input: a list
// output: the list minus one value
// going to need two variables, one for the current entry and one for the entry before
// go through the whole list until you get to the end (indicated by the '0')
// when you get to that value, delete the "next" value for the entry before and repalce w/ a '0'


// have to point it to the first node first

struct entry  *removeEntry(struct entry  *currentNode)
{

  // struct entry  *getNext(struct entry  *currentNode);
  struct entry  *prevNode;


  while (currentNode->next != 0 )
  {
        prevNode = currentNode;
        currentNode = currentNode->next;
  }

  prevNode->next = 0;

  return prevNode;

}

// have to get the next entry
//
// struct entry  *getNext(struct entry  *currentNode)
// {
//
//   struct entry  *nextNode;
//   nextNode = currentNode->next;
//
//   return nextNode;
//
// }
