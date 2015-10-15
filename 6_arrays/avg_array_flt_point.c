// Write a program to calculate avg of 10 floating-point values
//initialize array iwth space for 10 numbers
//  Prompt for the input, take all 10 numbers
// Assign those numbers to the appropriate point in array
// Add them all
// divide by 10

#include <stdio.h>

int main(void)

{
  int i;
  float array[10], input, accum = 0, avg;

  printf("Give me 10 floating-point numbers\n");
  for (i = 0; i < 10; ++i){
    scanf("%f", &input);
    array[i] = input;
  }

  for (i = 0; i< 10; ++i){
    accum += array[i];
    avg = (accum / 10);
  }

  printf("%f\n", avg);
}
