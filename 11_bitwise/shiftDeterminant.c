// program to determine whether computer performs arithmetic or logical right shift

// Right shifts on a signed value shift either a 1 or 0 in on the left.
// Always a 0 for positive values,
// however for negative (where leftmost value is 1), left-most digit shifted in can be either 1s or 0s.  Differs by machine
// Program to figure out which kind of shift your machine performs

// pseudo

// should expect these to be the same if right shift on negative number is arithmetic, since this version of c represents negative numbers with twos complement.
// Dividing by  is equivalent to shifting right by n

// If this version is making an arithmetic right shift, then B shifted n times to right should equal B/2^n
// Two flip between positive and negative in c, use two's complement:
// -B == (~B + 1)

#include <stdio.h>

int main(void)
{


    // signed int a = 4;
    signed int b =  -16;

    // b >>= 1;
    b >>= 2;


    printf("%i\n", b );

    b = -16;

    b /= 4;

    printf("%i\n", b );

    b = -16;


// switching between positive and negative representations
    if (-b == (~b + 1))
      printf("true\n");

    return 0;

}
