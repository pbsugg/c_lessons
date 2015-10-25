// find if one string is a substring of a larger string;

#include <stdio.h>
#include <stdbool.h>

// pseudo:

// how do you know if you've found it?
// go through the whole string, and for *every* occurence of the first substring char:
  // see if the remaining chars of the substring match the full string
  // IF they do, return that you have a match
  // ELSE check any remaining occurences of the first substring char
// If you return no full matches, return -1



int main(void)
{

  int findString(char whole[], char part[]);
  printf("%i\n", findString("Hello this is a man in a yellow hat", " in a"));

  return 0;

}


int stringLength(const char string[])
{

  int count = 0;
  while (string[count] != '\0')
    ++count;

  return count;

}


// bool findElement(const char whole[], char part)
//
// {
//
//   int stringLength(const char string[]);
//   int i;
//
//   for(i = 0; i <= (stringLength(whole) - 1); ++i)
//   {
//     if (whole[i] == part)
//       return true;
//   }
//   return false;
// }


int findString(char whole[], char part[])
{
  int stringLength(const char string[]);
  int i = 0;
  int matchTracker = 1;
  int j, k;
  // what determines whether the occurences of string are consecutive;

  for(i = 0; i < stringLength(whole); ++i)
  {
    if (part[0] == whole[i])
    {
      // this is the placeholder for where we are in the whole string;
      k = i + 1;
      // check the rest of the substring;
      for(j = 1; j < stringLength(part); ++j)
      {
        if (part[j] == whole[k])
        {
          ++matchTracker;
          ++k;
          if (matchTracker == stringLength(part))
            return 1;
        }
      }
    }
    matchTracker = 1;
  }
  return -1;
}
