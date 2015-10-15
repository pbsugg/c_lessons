// modification of 6.3 to accept any number of responses
// create an array of variable length, begin entering response
//once you receive the "999" response, display the results

#include <stdio.h>


int main(void)
{

  int i, response, ratingCounters[11];



  for (i = 1; i <= 10; ++i)
  ratingCounters[i] = 0;


  // Start getting the responses
  printf("Enter your responses\n");
  do {
    scanf("%i", &response);
    if (response < 1 || response > 10 ){
      if (response != 999)
        printf("Bad response: %i\n", response);
    }
    else
      ++ratingCounters[response];
  } while (response != 999);

  // for (i = 1; i <= numResponses; ++i){


  printf("\n\nRating  Number of Responses\n");
  printf("------ ----------------------\n");

  for (i = 1; i <= 10; ++i)
    printf("%4i%14i\n", i, ratingCounters[i]);

  return 0;

}
