//Modification of function to calculate sq root of numbers (p. 131)
//1) make epsilon pass as argument to function
// Modify for very small and very large numbers, so that you are looking at *ratio*, not difference


#include <stdio.h>

// Calculate abs value

float absoluteValue (float x)
{
  if (x < 0)
    x = -x;
  return (x);

}

//Alternate logic for very small and very large numbers (q. 4)
// (still doesn't seem to work for very large)

float squareRoot (float x)
{
  float guess = 3;

  while (((guess * guess) / x) >= 1.01){
    guess = (x / guess + guess) / 2.0;
    printf("%f\n", guess);
  }

  return guess;


}

int main (void)
{
  printf("%f\n", squareRoot(-40));
  return 0;
}



// float squareRoot (float x, const double epsilon)
// {
//   float guess = 1.0;
//
//   while (absoluteValue(guess * guess - x) >= epsilon){
//     guess = (x / guess + guess) / 2.0;
//     printf("%f\n", guess);
//   }
//
//   return guess;
//
//
// }
//
// int main (void)
// {
//   printf("%f\n", squareRoot(30, .00001));
//   return 0;
// }
