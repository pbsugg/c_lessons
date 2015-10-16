// Write function to calculate the least common multiple of something
// Input: two integer arguments
// Output: int, least common multiple
// Have to call gcd (greatest common divisor) in accordance with params in 7.6 (127)

#include <stdio.h>


int gcd (int u, int v)
{
  int temp;

  while (v != 0)
  {
    temp = u % v;
    u = v;
    v = temp;

  }
  return u;

}


int lcm(int u, int v)
{
  int lcm = (u * v) / gcd(u, v);

  return lcm;

}


int main (void)
{

  printf("lcm: %i\n", lcm(153, 502213));
  return 0;

}
