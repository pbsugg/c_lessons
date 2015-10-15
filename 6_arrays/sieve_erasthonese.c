// Sieve of Erasthones

// Steps
//Input: n, the range over when to look for primes
// Output: List of the primes for the given array

// Vars n, i, j
// Ask for n
// Size an array according to n
// make all values in the array 0
// Begin at the start of the array (i = 2)
//  2 <= i <= n, If i is ever greater than n, the algorithm terminates
// j begins at 2, but then goes to 3,4,5 UNLESS..
// i * j <= n, for all values of i * j set it equal to 1
// ++i (go to next value of i)

// any values of i which have

#include <stdio.h>


int main(void)

{
  int n, i, j;

  printf("search over what range of numbers for primes? enter the max number\n");
  scanf("%i", &n);
  n += 1;

  unsigned int array[n];

  // set all starting values to 0
  for (i = 0; i <= n; ++i){
    array[i] = 0;
  }

  // go through and start setting all non-prime values to 0

  for (i = 2; i <= n; ++i){
    for (j = 2; (i * j) <= n; ++j){
      array[i *j] = 1;
    }
  }

  for (i = 0; i < n; ++i){
    if (array[i] == 0)
      printf("%i : %i \n", i ,array[i]);
  }

  return 0;

}
