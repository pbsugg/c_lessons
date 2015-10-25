// Write function "substring" to extract part of character string
// pseudo:

// Input: a char array, the index to start at and the index to end,
// another char array with the results;
// Output: the result array
// Check whether the number of characters requested is longer than the count
//  IF it is, make the count no longer than the length of the whole string
// Find the starting index
// Begin reading at that index, copying it over to the next



// find the correct p



#include <stdio.h>

int main(void)
{

  int stringLength(const char string[]);
  int substring(const char source[], int start, int count);
  char test[]= "Geez man come on";


  substring(test, 4, 30);

}




int substring(const char source[], int start, int count)
{

  char result[count + 1];
  int stringLength(const char string[]);
  int sourceLength = stringLength(source);
  int i;

  // What to do if the count is off the end of the string
  if (count > (sourceLength - 1))
  // Would have subtracted 1 but need space for "null" character as well
    count = (sourceLength - start );

  int j = 0;
  for(i = start; i <= count; ++i)
  {

    result[j] = source[i];
    ++j;
    if (i == count)
      result[i] = '\0';

  }

  for (i = 0; i < (stringLength(result)); ++i)
    printf("%c", result[i]);

  printf("\nDone\n");

  return 0;

}
