// Receive following mathematical inputs: + - * /
//Take following commands: "S" (set acummulator), "E" (end program)

// input: two spaces, numerical value, math operator, or command
// output: result of the calculation OR result of the command

//


#include <stdio.h>

int main(void)
{
  float accumulator, value;
  char command;

  printf("Begin calculations\n");

  // printf("%i, %c", value, command);
  do
  {
    scanf("%f %c", &value, &command);
    if (value == 0)
    {
        printf("Value of number cannot be 0\n");
        return 0;
    }

      switch (command)
      {
        case 'S':
          accumulator = value;
          printf("%.6f  Accumulator Set\n", accumulator);
          break;
        case '+':
          accumulator += value;
          printf("Add %f\n", value);
          printf("%.6f  Contents of Calculation\n", accumulator);
      }
  }
  while (command != 'E');


  printf("End Calculations\n");
  return 0;

}
