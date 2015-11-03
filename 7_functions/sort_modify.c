// modify program 7.12 to take argument for ascending or descending order when

#include <stdio.h>

// n equals number of elements in the array
//order = "0" = "asc" 1 = "desc"



void sort( int a[], int n, int ordering)
{

  int i, j, temp;

  if (ordering == 0){

  for (i = 0; i < n - 1; ++i)
    for (j = i + 1; j < n; ++j){
        if (a[i] > a[j]){
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }

  else if (ordering ==   1){
    for (i = n - 1; i >= 0; --i)
      for (j = i -1; j >= 0; --j){
        if (a[i] > a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}


int main(void){

  int i;
  int array[16] = { 34,-5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

  // Only need this if main comes *first*
  // void sort (int a[], int n, int ordering);

  printf("The array before the sort:\n");

  for(i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  sort(array, 16, 1);

  printf("The array after the sort:\n");

  for (i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  printf("\n");

  return 0;

}
