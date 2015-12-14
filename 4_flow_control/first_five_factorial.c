// display the factorial values of 1-5

#include <stdio.h>

int main(void)
{
  int n, acc, x;

  for (n = 1; n <= 10; ++n){
    acc = 1;
    x = n;
    while (x > 0)
    {
      acc *= x;
      x -= 1;
    }
    printf("The factorial of %-7i is %i\n", n, acc);
  }

  return 0;



}
