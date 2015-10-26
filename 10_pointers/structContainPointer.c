// exercise 10.5, structure containing a pointer

#include <stdio.h>

int main(void)
{
  struct  intPtrs
  {
    int *p1;
    int *p2;
    int *p3;
  };

  struct intPtrs  pointers;
  int i1 = 100, i2, i3;

  // when making assignments to pointers it is always with "&"
  pointers.p1 = &i1;
  pointers.p2 = &i2;
  *pointers.p2 = -97;

  printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
  printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);

  i1 = 50;
  printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);

  // pointers.p3 = 5;
  // printf("p3 = %i\n", pointers.p3 );

  pointers.p3 = &i3;
  i3 = 30;
  printf("i3 = %i, p3 = %i\n", i3, *pointers.p3 );

  *pointers.p3 = 50;
  printf("i3 = %i, p3 = %i\n", i3, *pointers.p3 );


  return 0;
}
