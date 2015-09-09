#include <stdio.h>

int
main(int argc, char **argv) {
  printf("Welcome to the High Low game...\n");
  // Write your implementation here..
  char playAgain;
  do
  {
    int high = 100;
    int fakehigh = 101;   
    int low = 1;
    int mid;
    char answer;
    char dummy;
    printf("Think of a number between 1 and 100 and press press <enter>\n");
    dummy = getchar();
    do
    {
      mid = (high+low)/2;
      printf("Is it higher than %d? (y/n)\n", mid);
      answer = getchar();
      getchar();
      if (answer == 'y')
      {
        low = mid + 1;
      }     
      else if (answer == 'n')
      {
        high = mid - 1;
	fakehigh = mid;
      }
      else
      {
        printf("Type y or n\n");
      }
    } while (fakehigh > low);
    if (answer == 'y')
    {
      printf("\n>>>>>> The number is %d\n", mid + 1);
    }
    else 
    {
      printf("\n>>>>>> The number is %d\n", mid);
    }
    printf("\nDo you want to continue playing (y/n)?");
    playAgain = getchar();
    getchar();
  } while(playAgain == 'y');
  printf("Thanks for playing!!!\n");
}

