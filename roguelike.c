#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wall(int length)
{
	int i;
	printf("+");
	for(i = 0; i < length; i++)
	{
		printf("-");
	}
	printf("+\n");
}

void vacant(int length)
{
	int i;
	printf("|");
	for(i = 0; i < length; i++)
	{
		printf(".");
	}
	printf("|\n");
}

void occupied(int length, int x)
{
	int i;
	printf("|");
	for(i = 0; i < x; i++)
	{
		printf(".");
	}
	printf("@");
	for(i = 0; i < length-x-1; i++)
	{
		printf(".");
	}
	printf("|\n");
}

void drawRoom(int length, int height, int x, int y)
{
	int i;
	wall(length);
	for(i = 0; i < y; i++)
	{
		vacant(length);
	}
	occupied(length,x);
	for(i = 0; i < height-y-1; i++)
	{
		vacant(length);
	}
	wall(length);
}
int main()
{
	drawRoom(2, 2, 0, 1);
	drawRoom(5, 3, 1, 2);
	drawRoom(14, 8, 8, 5);

	return 0;
}

