// taken from p. 289, ex. 11.4--shows "rotating" an integer through bit operations

#include <stdio.h>

int main(void)
{
  unsigned int  w1 = 0xabcdef00u, w2 = 0xffff1122u;
  unsigned int  rotate (unsigned int  value, int n);

  printf("%x\n", rotate (w1, 8));
  printf("%x\n", rotate (w1, -16));
  printf("%x\n", rotate (w1, 4));
  printf("%x\n", rotate (w1, 2));

  return 0;

}

unsigned int  rotate (unsigned int  value, int n)
{
  unsigned int  result, bits;

  if (n > 0)
    n %= 32;
  else
    n = -(-n % 32);

  if (n == 0)
    result = value;
  else if (n > 0)    //left rotate
  {
    bits = value >> (32 - n);
    result = value << n | bits;
  }
  else
  {
    n = -n;
    bits = value << (32 - n);
    result = value >> n | bits;
  }

  return result;

}
