	/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <math.h>;
int main(void) 
{
	int i = 22;
	// line counts what line of the pyramid the program is on
	int line = 1;
	int tmp;
	for (line; line < 12; line++)
	{
		tmp = i;
		for (i; i > 0; i--)
		{
			printf(" ");
		}
		i = tmp - 2;
		printf("%d", line);
		printf("\n");
	}
	getchar();
}
int xxx(int amount) 
{
	int counter = amount;
	int value = 1;
	for (int i = 0; i < counter; i++)
	{
		value = value * 3;
	}
	return value;
}