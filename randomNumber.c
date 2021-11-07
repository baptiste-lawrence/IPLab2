#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float getRand()
{
	return rand() / (RAND_MAX+1.0);
}

int main()
{
	srand ( time(NULL) );
	getRand();

	float number = getRand();
	printf("Random number = %f\n", number);
	return 0;
}
