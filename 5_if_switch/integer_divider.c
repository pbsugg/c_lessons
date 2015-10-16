//get two numbers, display the result of dividing the first by the second
// check if division by 0

#include <stdio.h>

int main(void){

  int a, b;

  printf("Integer 1\n");
  scanf("%i", &a);
  printf("Integer 2:\n");
  scanf("%i", &b);

  if (a == 0 || b == 0){
    printf("Invalid input, cannot be equal to 0\n");
    return 0;
  }

  float c = (float) a / b;
  printf("%.3f: the result of dividing %i and %i\n", c, a, b);

  return 0;

}
