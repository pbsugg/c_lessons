// Convert a standard lowercase ASCII character to its uppercase equivalent
// use the fact that if var c = 'a', then c -'a' + 'A' = C
// This is because subtracting from its lowercase equivalent gives you the
// interval between them, and then adding the capital letter gives you the same interval,
// but for the capital equivalent


// Do this for an entire string


// only works at this point if all the characters lower case;

#include <stdio.h>
#include <string.h>


int main(void)
{

  // int c = 'c';
  // c = c - 'a' + 'A';
  int lowerToUpper(char string[]);
  lowerToUpper("adkjjsd");



}

int lowerToUpper(char string[])
{

  int i;
  char newString[strlen(string)];

  for (i = 0; string[i] >= 'a' && string[i] <= 'z'; ++i)
  {
      newString[i] = string[i] - 'a' + 'A';
  }

  for(i = 0; i < strlen(string); ++i)
  {
    printf("%c", newString[i]);

  }
  printf("\n");

  return 0;

}
