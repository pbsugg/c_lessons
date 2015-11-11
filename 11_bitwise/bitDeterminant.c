// given that expression ~0 (ones complement) produces an integer with all 1s, write function called int_size() that returns number of bits in particular machine

// if you are ANDing with an integer that is all 1s, then...
// as long as AND keeps yielding back the number you are ANDing with,
// then you need at least as many bits as it takes to represent that number
// so keep increasing by a power of two until you get back a negative number
// then you know you have reached your bit limit

// answer is of course (bits - 1) since you have to leave room for the sign value
// (I now realize that ints are signed by default in c)

//Update: changed integers to long and compiled in 64-bit architecture, bit counter confirmed I am running in 64 bit (ints are still 32)

#include <stdio.h>


int main(void)
{
  int intSize(int n);
  int a;

  a = intSize(200);
  printf("%i\n", a);
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
