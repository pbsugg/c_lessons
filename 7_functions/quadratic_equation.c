// Create program to calculate quadratic

#include <stdio.h>

//For developing the square root;

float absoluteValue (float x)
{
  if (x < 0)
    x = -x;
  return (x);

}

float squareRoot (float x, const double epsilon)
{
  float guess = 3.0;

  while (absoluteValue(guess * guess - x) >= epsilon){
    guess = (x / guess + guess) / 2.0;
    printf("%f\n", guess);
  }

  return guess;


}

// int main (void)
// {
//   printf("%f\n", squareRoot(30, .00001));
//   return 0;
// }


int quadraticRoot(int a, int b, int c)
{



// Can't have more than 2 quadratic roots
  float quadRoots[2], discriminant;

  discriminant = squareRoot(((b*b) - (4 * a *c)), .01);
  if (discriminant <= 0){
    printf("Roots less than 0");
    return 0;
  }
  quadRoots[0] = (-b + discriminant /( 2 * a));
  quadRoots[1] = (-b - discriminant /( 2 * a));

  int i;
  for (i = 0; i < 2; ++i)
    printf("%f\n", quadRoots[i]);

  // for
  return 0;

}

int main (void)
{

  quadraticRoot(3,4,5);

}
