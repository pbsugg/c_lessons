// based on program 9.11 (p. 228), converting a string to its integer equivalent
// modify so that if value is a minus sign, makes it a negative number
// take it off at the beginning, rewrite the


#include <stdio.h>
#include <stdbool.h>



int strToInt (const char string[])
{

  int i, intValue, negStart, result = 0;

  if (string[i] == '-')
    negStart = 1;
  else
    negStart = 0;

  for (i = negStart; string[i] >= '0' && string[i] <= '9'; ++i)
  {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }

  if (negStart == 1)
    result = -result;

  return result;

}

int main(void)
{

  int strToInt (const char string[]);
  strToInt("345");

  printf("%i\n", strToInt("245"));
  printf("%i\n", strToInt("-300"));


}
