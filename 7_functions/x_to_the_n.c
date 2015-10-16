// Function that raises an integer x to positive integer power n
// Input: x and n
// Output: long int, result of x^n

#include <stdio.h>

long int x_to_the_n(int x, int n)
{

  int i;
  long int acc= 1;

  for (i = 1; i <= n; ++i){

    acc *= x;

  }

  return acc;


}


int main (void)
{

    printf("%li\n", x_to_the_n(3, 20));

    return 0;

}
