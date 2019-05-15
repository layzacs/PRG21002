// rand example: guess the number
// extract from www.stackoverflow.com
#include <stdio.h>
#include <stdlib.h> // Lib that includes rand
#include <time.h> // Lib that includes time.h, responsible for getting the system's time for the seed

int main ()
{
      int iSecret, iGuess;

      /* initialize random seed: */
      srand ( time(NULL) );

      /* generate secret number: */
      iSecret = 1 + (rand() % 10); // 1+ rand() % 10 represents the interval(1,10).

      do {
          printf ("Guess the number (1 to 10): ");
          scanf ("%d",&iGuess);
          if (iSecret<iGuess)
              printf ("The secret number is lower\n");
          else {
              if (iSecret>iGuess)
                 printf ("The secret number is higher\n");
          }
      } while (iSecret!=iGuess);

      printf ("Congratulations!\n");
      return 0;
}
