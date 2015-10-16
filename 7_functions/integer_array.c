// function array sum
// input: integer array, number of elements in array
// output: sum of the elements in the array

#include <stdio.h>

int arraySum(int array[], int numElements)
{
  int acc = 0, i;

  for(i = 0; i < numElements; i++){
      acc += array[i];
      printf("%i\n", acc);
  }

  return acc;
}

int main(void)
{

  int testArray[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("%i", arraySum(testArray, 10));

}
