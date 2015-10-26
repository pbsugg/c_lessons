// function to insert one string into another at a give position;

#include <stdio.h>


int main(void)
{

  int stringLength(const char string[]);
  int insertString(const char baseString[], const char insertString[], int position);

  insertString("Hello dude", "this is a test", 2);

  return 0;

}

int stringLength(const char string[])
{

  int count = 0;
  while (string[count] != '\0')
    ++count;

  return count;

}


// pseudo
// make sure the index is in the string
// create a new char array that is the proper length
// begin writing from the old original to the new char array
// WHEN you get to the point to insert
// begin writing from the insert array until you get to the correct point
// once you reach the end of the insert array, keep writing from the original
  // ... IF there are any spaces left..

int insertString(const char baseString[], const char insertString[], int position)
{

  int stringLength(const char string[]);
  int origLength = stringLength(baseString);

  if (position >= origLength)
    position = (origLength - 1);

  int returnArrayLength = origLength + stringLength(insertString);
  char returnArray[returnArrayLength];
  int i, j;
  int k = 0;


  int insertStringLength = stringLength(insertString);

  for(i = 0; i < returnArrayLength; ++i)
  {

      // point to begin inserting--check this first
      if(i == position)
      {
        for(j = 0; j < insertStringLength; ++j)
        {
              returnArray[i] = insertString[j];
              ++i;
        }
      }
      // original array can't be pushed out of memory.
      returnArray[i] = baseString[k];
      ++k;

  }

  for(i = 0; i < returnArrayLength; ++i)
  {
    printf("%c", returnArray[i]);
  }
  printf("\n");

  return 0;

}
