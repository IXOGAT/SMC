	/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <math.h>;
int main(void) 
{
	int i = 6;
	int count = 1;
	for (i; i > 0; i--)
	{
		for(int n = i; n > 0; n--)
		{
			printf(" ");
			for (n; n > 0; n--)
			{
				printf("%d", count);
				printf(" ");
				count = count * 3;
			}
			printf(" ");
			printf("\n");
			count = 1;
		}

		/*
		printf("%d", count);
		count = count * 3;
		printf("\n");
		*/
	}
	getchar();
}