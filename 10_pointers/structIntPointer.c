// taking apart example 10.4 to get the hang of pointers in structs

#include <stdio.h>

int main(void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date  today, *testPointer;
  testPointer = &today;

  testPointer->month = 9;
  testPointer->day = 25;
  testPointer->year = 2015;


  printf("%i/%i/%i\n", testPointer->month, testPointer->day, testPointer->year);
  // pointer passed it through to the day
  printf("%i/%i/%i\n", today.month, today.day, today.year);

}
