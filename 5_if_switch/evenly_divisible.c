#include <stdio.h>

//get two numbers
// calculate if one is divisible by the other
// assign result to boolean
// return results


int main(void){

  int a,b;
  _Bool divisible;

  printf("Give me one number:\n");
  scanf("%i", &a);
  printf("Give me another number:\n");
  scanf("%i", &b);

  if ((a % b == 0) || (b % a == 0)){
    divisible = 1;
    printf("%i, the numbers are divisible\n", divisible);
  }
  else {
    divisible = 0;
    printf("%i, the numbers are NOT divisible\n", divisible);
  }
  return 0;

}
