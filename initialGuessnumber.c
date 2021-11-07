#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float getRand()
{
	return rand() / (RAND_MAX + 1.0);
}

int guess(int correct_answer)
{
	int count;
        printf("Test only. The correct answer is %d\n", correct_answer);
	printf("Ramdom range is from 1 to 32\n");
	printf("You can only try 5 times at most.\n");
        for(count = 0; ; count ++)
	{
		printf("Guess the number : ");
		int i;
		scanf("%d", &i);
		if (i == correct_answer)
		{
			printf("Correct!\n");
			printf("You win!\n");
			return 0;
		}

		else if (i < correct_answer)
		{
			printf("Too low\n");
			printf("You have tried %d times.\n", count + 1);
                        if( count == 4 )
			{
				printf("You lose\n");
				return 0;
			}
		}

		else
		{
			printf("Too high\n");
			printf("You have tried %d times.\n", count + 1);
			if( count == 4 )
			{
				printf("You lose\n");
				return 0;
			}
		}
	}
}

int main()
{
	srand( time(NULL) );
	float a = getRand();
	int correct_answer = (int)(a * 32) + 1;
	guess(correct_answer);
	return 0;
}
