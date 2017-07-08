/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <math.h>;
void power3(int amount);
int topCount;
int botCount;
int midSector;
int i;
int main(void)
{
	i = 2;
	while (i % 2 != 1)
	{
		printf("Enter in the amount of lines that you want to print, the amount needs to be odd, otherwise the program won't work properly.");
		scanf_s("%d", &i);
	}
	// line counts what line of the pyramid the program is on
//	int lineTop = 1; /*replaced by topCount*/
//	int lineBot = 5; /*replaced by botCount*/
	topCount = 1;
	botCount = i / 2;
	midSector = botCount + 1;
	int tmp;
	for (topCount; topCount <= midSector; topCount++)
	{
		tmp = i;
		for (i; i > 0; i--)
		{
			printf(" ");
		}
		i = tmp - 2;
		power3(topCount);
		printf("\n");
	}
	i = 2;
	for (botCount; botCount > 0; botCount--)
	{
		tmp = i;
		for (i; i > 0; i--)
		{
			printf(" ");
		}
		i = tmp + 2;
		power3(botCount);
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
void power3(int amount)
{
	int value = 1;
	//counting up
	for (int i = 0; i < amount; i++)
	{
		printf("%d", value);
		value = value * 3;
		printf(" ");
	}
	//counting down
	value = value / 3;
	for (int n = 0; n < amount; n++)
	{
		if (value > 1)
		{
			value = value / 3;
			printf("%d", value);
			printf(" ");
		}
	}
	//return value;	
}