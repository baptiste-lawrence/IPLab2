#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float getRand()
{
	return rand() / (RAND_MAX + 1.0);
}

int guess()
{
	int guesses, times;
        for(guesses = 0;;guesses ++)
	{
		srand( time(NULL) );
		float a = getRand();
		int correct_answer = (int)(a * 32) + 1;
        	int count;
        	printf("Test only. The correct answer is %d\n", correct_answer);
		printf("Ramdom range is from 1 to 32\n");
		printf("You can only try 4 times at most.\n");
        	for(count = 0; ; count ++)
		{
			printf("Guess the number : ");
			int i;
			scanf("%d", &i);
			if (i == correct_answer)
			{
				printf("Correct!\n");
				break;
			}
	
			else if (i < correct_answer)
			{
				printf("Too low\n");
				printf("You have tried %d times.\n", count + 1);
			}
	
			else
			{
				printf("Too high\n");
				printf("You have tried %d times.\n", count + 1);
			}
		}
		if( count > 3 )
		{
			if(guesses == 0)
			{
				printf("Your fewest number of guesses is %d\n", count + 1);
				times = count + 1;
			}
			else
			{
				if(count + 1 <= times)
				{
					printf("Your fewest number of guesses is %d\n", count + 1);
					times = count + 1;
				}
				else
				{
					printf("Your fewest number of guesses is %d\n", times);
				}
			}
			printf("The number of guesses is excessive. Please try again.\n");
			printf("\n");
			continue;
		}
		else
		{
			printf("Your fewest number of guesses is %d\n", count + 1);
			printf("You win\n");
			break;
		}
	}
	return 0;
}

int main()
{
	guess();
	return 0;
}
