#include <stdio.h>

// Write a pointer version of the function to sort integers in ascending orde
// going to be working with pointers to integer arrays here
// based on sort_modify in ch. 7


// create a pointer to first element in the array
// increment by the pointer
// go through

// n is the length of the array
int sortArray(int array[], const int n)
{
  int *ptr = array;
  int *ptr2 = array + 1;
  int *holder;
  int * const length = array + n;

  for(ptr = array; ptr <= length; ++ptr)
    for (ptr2 = array + 1; ptr2 <= length; ++ptr2)
    {
      if (*ptr > *ptr2)
      {
        *holder = *ptr;
        *ptr = *ptr2;
        *ptr2 = *holder;
      }

    }

    return 0;

}


int main(void){

  int sortArray(int array[], const int n);
  int i;
  int array[16] = { 34,-5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

  // Only need this if main comes *first*
  // void sort (int a[], int n, int ordering);

  printf("The array before the sort:\n");

  for(i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  sortArray(array, 1);

  printf("The array after the sort:\n");

  for (i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  printf("\n");

  return 0;

}
