// modify 6.1 on p. 99 so that all array values are set to 0

#include <stdio.h>

int main(void)

{
  int values[10], i;

  for (i = 0; i <= 9; ++i){
    values[i] = 0;
    printf("%i\n", values[i]);
  }

  return 0;

}
