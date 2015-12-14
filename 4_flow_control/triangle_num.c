// generate every fifth triangular number between 0 and 50
// formula n(n + 1) / 2
#include <stdio.h>

int main(void)
{

  int n, triangleNum;

  for (n = 0; n <= 50; n += 5)
  {
    triangleNum = (n*(n + 1))/2;
    printf("The triangle num for n(%i) is %i\n", n, triangleNum);
  }

  return 0;


}
