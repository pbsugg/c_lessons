#include <stdio.h>

int main(void)
{

  int i, response, numResponses;

  for (i = 1; i <= 10; ++i)
  ratingCounters[i] = 0;

  printf ("How many responses to enter?\n");
  scanf("%i", &numResponses);

  printf("Enter your responses\n");

  for (i = 1; i <= numResponses; ++i){
    scanf("%i", &response);

    if (response < 1 || response > 10)
      printf("Bad response: %i\n", response);
    else
      ++ratingCounters[response];

  }

  printf("\n\nRating  Number of Responses\n");
  printf("------ ----------------------\n");

  for (i = 1; i <= 10; ++i)
    printf("%4i%14i\n", i, ratingCounters[i]);

  return 0;

}
