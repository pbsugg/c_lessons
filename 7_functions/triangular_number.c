//modify 7.4 (p. 123) so that value of triangularNumber returned by the function

#include <stdio.h>

int calculateTriangularNumber (int n)
{

  int i, triangularNumber = 0;

  for (i = 1; i <=n; ++i)
    triangularNumber += i;

  return triangularNumber;

  // printf ("Triangular number %i is %i\n", n, triangularNumber);

}

int main (void)
{

  printf("%i\n", calculateTriangularNumber(2));


}
