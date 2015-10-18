// p. 190, q. 2
// calculate days between two dates
// formula to use:
// For each date: N = 1461 x f(year, month)/4 + 153 x g(month)/5 + day

// f(year, month =

// if month <= 2
  // year -1
// else
  // year
//

// g(month) =
 // if month <= 2
  // month + 13
  // else
  // month + 1

// return N1 - N2

  // Input: Two dates, mm/dd/yy
  // output: days between


// pseudo (brief)
// get the two times
// perform the calculations
// return the number

#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;

};


int main(void)
{
  int n;
  int yearCalc(int year, int month);
  int monthCalc(int month);
  int dayCalcFormula(struct date dateInput);
  int daysBetween(struct date dateOne, struct date dateTwo);

  struct date date1 = {11,21,1984};
  struct date date2 = {10,17,2015};

  printf("number of days between 11/21/1984 and 10/17/2015: %i\n", daysBetween(date1, date2));

}


int yearCalc(int year,int month)
{
  if (month <= 2){
    return year - 1;
  }
  else
    return year;

}

int monthCalc(int month)
{
  if (month <= 2)
    return month + 13;
  else
    return month + 1;
}

int dayCalcFormula(struct date dateInput)
{

  int n;
  n = ((1461 * yearCalc(dateInput.year, dateInput.month)) / 4) + ((153 * monthCalc(dateInput.month)/ 4)) + dateInput.day;
  return n;
}

int daysBetween(struct date dateOne, struct date dateTwo)
{

  return dayCalcFormula(dateTwo) - dayCalcFormula(dateOne);
}
