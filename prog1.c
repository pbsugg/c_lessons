#include <stdio.h>
#include <math.h>

int main(void)
{
int i = 365;
int j = 7;
int Next_multiple = i + j - i % j;
printf ("%i\n", Next_multiple);


}
