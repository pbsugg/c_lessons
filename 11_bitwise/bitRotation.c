// change program 11.4 to not make assumptions about int size (dont assume 32)

#include <stdio.h>

int main(void)
{

  unsigned int rotate(unsigned int  value, int n);

  unsigned int  w1 = 0xabcdef00u;
  printf("%x\n", rotate (w1, 8));

  return 0;

}


unsigned int rotate(unsigned int  value, int n)
{

  unsigned int  result, bits;
  int intSize(int n);

  int integerBits = intSize(value);
  // scale down the shift count to a defined range

  if (n > 0)
    n = n % integerBits;
  else
    n  = -(-n % integerBits);

  if (n == 0)
    result = value;
  else if (n > 0)   //left rotation
    {
      bits = value >> (integerBits - n);
      result = value << n | bits;
    }
  else   //right rotate
    {
      n = -n;
      bits = value << (integerBits - n);
      result = value >> n | bits;
    }

    return result;

}



int intSize(int n)
{

  int a = 2;
  int bits = 2;
  int c = (~0 & a);

  while (c >= 0)
  {
    a *= 2;
    c = (~0 & a);
    bits += 1;

  }

  return bits;

}
