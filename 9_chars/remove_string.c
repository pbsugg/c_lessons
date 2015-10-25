// function to find a substring in a larger string and remove it.

// Input: (1) string from which to remove characters, (2) index to start, (3) index to end
// Output: Original string with section removed, contracted

// pseudo:
// Calculate whether the parameters to remove make sense,
 // IF they are off the end of the index on either side
      // Set the paramters at the lower or upper bound, depending
// Calculate the length of the original string
// Figure out how long the new string will be
// Begin writing from the old string
// WHEN you get to the index you're supposed to remove, stop writing
// BEGIN writing again when you get past the extracted part
// Return the string (or just print it, depending)

#include <stdio.h>


int main(void)
{

  int stringLength(const char string[]);
  int removeString(const char string[], int start, int finish);
  removeString("This is a test of the system", 1, 5 );


}



int stringLength(const char string[])
{

  int count = 0;
  while (string[count] != '\0')
    ++count;

  return count;

}


int removeString(const char string[], int start, int finish)
{
  // Defining my return string length
  int stringLength(const char string[]);
  int length = stringLength(string);

  // if start
  if (start < 0)
  {
    start = 0;
  }
  else if (finish >= length)
  {
    finish = (length - 1);
  }

  // Defining my return char array
  int returnStringLength = (length - ((finish - start) + 1));
  char returnString[returnStringLength];
  int i;
  int k = 0;


  for(i = 0; i < length; ++i)
  {

      if (i >= start && i <= finish)
      {
        string[i];
      }
      else
      {
        returnString[k] = string[i];
        ++k;
      }

  }

  // Print the result;
  for(i = 0; i < returnStringLength; ++i)
  {
    printf("%c", returnString[i]);
  }
  printf("\n");

  return 0;

}
