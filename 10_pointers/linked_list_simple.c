// first stab at linked list, from 10.6

#include <stdio.h>

int main(void)
{

  struct entry
  {
    int value;
    struct entry *next;
  };

  struct entry n1, n2, n3;
  int i;

  n1.value = 100;
  n2.value = 200;
  n3.value = 300;

  n1.next = &n2;
  n2.next = &n3;

  // like you're saying 'n1.next.value'
  // the '->' is because of how the expression is evaluated
  // if you're assigning an actual value, have to use '->', else use '&' statement
  i = n1.next->value;
  printf("%i  ", i);

  // 'next' points to the next struc, then you have to define what element within it.
  printf("%i\n", n2.next->value);

  return 0;

}
