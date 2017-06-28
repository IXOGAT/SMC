/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <math.h>;
int main(void) 
{
	int i = 10;
	// line counts what line of the pyramid the program is on
	int lineTop = 1;
	int lineBot = 5;
	int tmp;
	for (lineTop; lineTop < 7; lineTop++)
	{
		tmp = i;
		for (i; i > 0; i--)
		{
			printf(" ");
		}
		i = tmp - 2;
		int powup = multup(lineTop);
		int powdwn = multdwn(lineTop, powup);
		printf("\n");
	}
	i = 2;
	for (lineBot; lineBot > 0; lineBot--)
	{
		tmp = i;
		for (i; i > 0; i--)
		{
			printf(" ");
		}
		i = tmp + 2;
		int powup = multup(lineBot);
		int powdwn = multdwn(lineBot, powup);
		printf("\n");
	}
	getchar();
	return 0;
}
int multup(int amount) 
{
	int value = 1;
	for (int i = 0; i < amount; i++)
	{
		printf("%d", value);
		value = value * 3;
		printf(" ");
	}
	return value;
}
int multdwn(int amount, int current)
{
	int value = current;
	value = value / 3;
	for (int i = 0; i < amount; i++)
	{
		if (value > 1)
		{
			value = value / 3;
			printf("%d", value);
			printf(" ");
		}
	}
	return value;
}