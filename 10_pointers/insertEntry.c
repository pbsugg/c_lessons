// insert  new entry into a linked list
// input: (1) pointer to list entry to insert (struct entry)
//  (2) pointer to element in list after which new entry will be inserted

// pseudo:
// create a struct entry item to insert (first pointer argument points to this)

#include <stdio.h>

struct entry
{
  int value;
  struct entry  *next;

};


int main(void)
{


  struct entry  *insertEntry (struct entry  *listPtr, struct entry  *elementInsertAfter);
  struct entry  entryToInsert, n1, n2, n3;
  // set existing node values

  n1.value = 30;
  n2.value = 40;
  n3.value = 50;

  n1.next = &n2;
  n2.next = &n3;

  // set entry to insert

  entryToInsert.value = 100;
  struct entry  *entryPtr = &entryToInsert;
  struct entry  *elementInsertAfter = &n3;


  struct entry  *listPtr;   // store result
  listPtr = insertEntry(entryPtr, elementInsertAfter);

  printf("Entry %i.\n", listPtr->value);

}

// pseudo:
// set the value of the previous element (element insert after) to point to entry
// pointer always goes at the end so don't have to set your entry pointing to anything

struct entry  *insertEntry (struct entry  *listPtr, struct entry *elementInsertAfter)
{

  // to see if it inserted
  if (elementInsertAfter->next)
    printf("%i\n", 1);
  else
    printf("%i\n", 0);

  elementInsertAfter->next = listPtr;

  if (elementInsertAfter->next)
    printf("%i\n", 1);

  return listPtr;

}
