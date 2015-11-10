// given that expression ~0 (ones complement) produces an longeger with all 1s, write function called long_size() that returns number of bits in particular machine

// if you are ANDing with an integer that is all 1s, then...
// as long as AND keeps yielding back the number you are ANDing with,
// then you need at least as many bits as it takes to represent that number
// so keep increasing by a power of two until you get back a negative number
// then you know you have reached your bit limit
// (long are signed by default in c)


// answer is of course bits - 1 since you have to leave room for the sign value

//Update

#include <stdio.h>
#include <math.h>

int main(void)
{
  long a = 2;
  long bits = 2;
  long c = (~0 & a);

  while (c >= 0)
{

    a *= 2;
    c = (~0 & a);
    bits += 1;
    printf("%li\n", bits);
  }

  return bits - 1;

}
