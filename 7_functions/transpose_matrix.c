// part 1: transpose a 4x5 matrix into a 5x4 matrix
// take the 4x5 matrix and put it in the 5x4 matrix
#include <stdio.h>

// int transposeMatrix(int fourByFive[4][5], int fiveByFour[5][4])
// {
//
//   int i, j;
//
//     for (i = 0; i < 4; i++){
//       for (j = 0; j < 5; j++){
//         fiveByFour[j][i] = fourByFive[i][j];
//       }
//     }
//
//     // printing
//
//     for (i = 0; i < 5; i++){
//         for (j = 0; j < 4; j++){
//           printf(" %i ", fiveByFour[i][j]);
//         }
//         printf("\n");
//     }
//
//     return 0;
//
//
// }
//
// int main(void)
// {
//   int fourByFive[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
//   int fiveByFour[5][4] = {0};
//
//   transposeMatrix(fourByFive, fiveByFour);
//
//   return 0;
//
// }



// Release 2: take the number of rows and columns as arguments and use variable-length array

// interesting--you can insert value from one argument into another as long as it comes after
int transposeMatrix(int rows, int columns, int matrixBefore[rows][columns])
{

  int i, j;
  int matrixAfter[columns][rows];

    for (i = 0; i < rows; i++){
      for (j = 0; j < columns; j++){
        matrixAfter[j][i] = matrixBefore[i][j];
      }
    }

    // printing

    for (i = 0; i < columns; i++){
        for (j = 0; j < rows; j++){
          printf(" %i ", matrixAfter[i][j]);
        }
        printf("\n");
    }

    return 0;


}

int main(void)

{
  int fourByFive[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
  // int fiveByFour[5][4] = {0};

  transposeMatrix(4,5,fourByFive);

  return 0;

}
