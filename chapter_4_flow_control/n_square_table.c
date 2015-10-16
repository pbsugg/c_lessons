// Create a table that shows values of n and n-squared between 1 and 10

#include <stdio.h>
#include <math.h>

int main(void)
{

  int n, sq_n;

  for (n = 1; n <= 10; ++n){
    sq_n = pow(n, 2);
    printf("n  n-squared\n");
    printf("------------\n");
    printf("%i     %i\n\n", n, sq_n);
  }
  
  return 0;

}
