// change readline function from p. 207 to use arrays
#include <stdio.h>

int main(void)
{
  int  i;
  char  line[81];
  void  readLine(char buffer[]);

  for(i = 0; i < 3; ++i)
  {
    readLine(line);
    printf("%s\n\n", line);
  }

  return 0;

}

void readLine (char buffer[])
{

  char  *charPointer = buffer;

  do
  {
    *charPointer = getchar ();
    ++charPointer;
  }
  while (*(charPointer - 1) != '\n');

  *(charPointer + (charPointer - buffer)) = '\0';

}
