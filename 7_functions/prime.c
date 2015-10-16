// return 1 if function is prime, 0 otherwise
// take every number n from 2 --> number -1
// if number % n is never equal to 0, it is prime

#include <stdio.h>

int prime(int number)
{

  int i;

  for (i = 2; i < number; i++ ){
    if (number % i == 0)
      return 0;
  }

  return 1;

}

int main(void)
{

  printf("%i\n", prime(37));
  printf("%i\n", prime(84));
  printf("%i\n", prime(23));
  printf("%i\n", prime(35343));



}
