//program to calculate the triangle number (n) for a triangle with 50 rows
// n(1) = 1
// n(x-1) + x



# include <stdio.h>


int main(void)
{
  int n, triangularNumber;

  triangularNumber = 0;

  for (n = 1; n <= 50; n += 1)
    triangularNumber += n;

  printf ("The 50th triangular number is %i\n", triangularNumber);

  return 0;

}
