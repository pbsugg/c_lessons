// #3, take function time_elapsed
// input: two time structures
// output: time between them

#include <stdio.h>
#include <stdbool.h>

struct time
{
  int hours;
  int minutes;
  int seconds;
};


int main(void)
{

  struct time timeElapsed(struct time timeOne, struct time timeTwo);
  bool passMidnight(struct time timeOne, struct time timeTwo);

  struct time timeTwo = {4, 15, 33};
  struct time timeOne = {20, 16, 34};

  struct time timeDifference = timeElapsed(timeOne, timeTwo);


  printf("Elapsed time: %.2i:%.2i:%.2i", timeDifference.hours, timeDifference.minutes, timeDifference.seconds);

}

// timeTwo should be the later one
// run the pass_midnight algorithm
// if it's true
// subtract 24 from the first number, add it to the second number
// hours are either this number or one less

// go to the minutes
// IF minutes of timeTwo are greater,

// IF timeTwo.minutes > timeOne.minutes
// timeTwo.hour
// timeTwo.seconds - timeOne.seconds
// IF minutes of time One are greater
// ((60 - timeTwo.hour) + timeOne.hour) -1

// go to the seconds
 // IF secondsTwo > secondsOne
 // secondsTwo - SecondsOne
 // IF secondsTwo < secondsOne
 // (60 - secondsTwo) + secondsOne

struct time timeElapsed(struct time timeOne, struct time timeTwo)
{

  // declare other function
  bool passMidnight(struct time timeOne, struct time timeTwo);

  struct time timeDifference;
  int hours, minutes, seconds;

  // get hours
  if (passMidnight(timeOne, timeTwo))
  {
    timeDifference.hours = (24 - timeOne.hours) + timeTwo.hours;
  }
  else if (timeTwo.hours > timeOne.hours)
  {
    timeDifference.hours = timeTwo.hours - timeOne.hours;
  }

  // minutes
  if (timeTwo.minutes > timeOne.minutes)
  {
    timeDifference.minutes = timeTwo.minutes - timeOne.minutes;
  }
  else if (timeTwo.minutes < timeOne.minutes)
  {
    timeDifference.minutes = ((60 - timeOne.minutes) + timeTwo.minutes);
    timeDifference.hours -= 1;
  }
  else if (timeTwo.minutes == timeOne.minutes)
  {
    timeDifference.minutes = 0;
  }

  // seconds

  if (timeOne.seconds < timeTwo.seconds)
  {
    timeDifference.seconds = timeTwo.seconds - timeOne.seconds;
  }
  else if (timeOne.seconds > timeTwo.seconds)
  {
    timeDifference.seconds = (60 - timeOne.seconds) + timeTwo.seconds;
    if (timeDifference.minutes > 0)
    {
      timeDifference.minutes -= 1;
    }
    else if (timeDifference.minutes == 0)
    {
      timeDifference.minutes = 59;   //account for a change in hour from a change in minutes
      timeDifference.hours -= 1;
    }
  }
  else if (timeTwo.seconds == timeOne.seconds)
  {
    timeDifference.seconds = 0;
  }

  return timeDifference;

}

// to determine if the times cross midnight

bool passMidnight(struct time timeOne, struct time timeTwo)
{

  if (timeOne.hours >= timeTwo.hours)
    return true;
  else
    return false;

}
  
