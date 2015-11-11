
// problem 1:
// function to return "1" if bit number n is "on" (set to 1) inside a word, otherwise 0
// leftmost bit is 0

// problem 2:
// function, bit_set, that takes two arguments: unsigned bit and bit number n.
// return the result of turning bit number n on inside the number

#include <stdio.h>

int main(void)
{

  int bitTest(unsigned int  value, int n);
  printf("bitTest: %i\n", bitTest(4, 28));

  int bitSet(unsigned int  value, int n);
  printf("bitSet: %i\n", bitSet(4, 32));



  return 0;
}

// pseudo: start with 1, which is in position 31;
// left-shift it n - 1 spaces;
// AND it with your value;
// if the value stays the same, bit was on (1), otherwise it was off (0);
int bitTest(unsigned int  value, int n)
{
  int test = 1;
  test <<= (32 - n);    //asumming ints are 32 bits;



  int resultHolder = value;

  int result;
  result = value & test;
  // printf("result: %i\n", result);

  if (resultHolder == result)
    return 1;
  else
    return 0;

}

// similar to the check
// want to leave it one if it's already on, otherwise keep it on: inclusive-OR

int bitSet(unsigned int  value, int n)
{

  int test = 1;
  test <<= (32 - n);

  int result = test | value;

  return result;
}
