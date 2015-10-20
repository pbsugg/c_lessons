// from ch. 8, p. 191,
// use dateAndTime and timeUpdate functions to change both time and dateAndTime

#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;

};


struct date
{
  int month;
  int day;
  int year;
}


struct date  dateUpdate (struct date today)
{
  struct date tomorrow;
  int numberOfDays (struct date today)

  if (today.day != numberOfDays(today))
    tomorrow = (struct date){today.month, today.day + 1, today.year};
  else if (today.month == 12) //end of year
    tomorrow = (struct date){1,1,today.year + 1};
  else
    tomorrow = (struct date){today.month + 1, 1, today.year};

  return tomorrow;

}


struct time timeUpdate (struct time now)
{
  ++now.seconds;

  if (now.seconds == 60){
    now.seconds = 0;
    ++now.minutes;

    if (now.minutes == 60){
      now.minutes = 0;
      ++now.hour;

      if (now.hour == 24)
        now.hour = 0;
    }
  }

}


int numberOfDays (struct date d)
{

  int days;
  bool isLeapYear (struct date d);
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // if (isLeapYear (d) && d.month == 2)

}
