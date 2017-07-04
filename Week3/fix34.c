/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <stdbool.h>;
#include <math.h>;
int fix34(int input[]);
void printArray(int original[], int fixed[]);
int main(void)
{
	int array[9] = { 1, 3, 8, 5, 4, 3, 6, 4, 5 };
	//int sorted[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int sorted = fix34(array);
	printArray(array, sorted);
	getchar();
}

int fix34(int input[])
{
	//int tmp[9] = array;
	int input3[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int non3[3] = { 0, 0, 0 };
	int i = 0;
	for (i; i <= 9; i++)
	{
		if (input[i] == 3)
		{
			input3[i] = 3;
			input3[i + 1] = 4;
			input3[i + 2] = 5;
		}
	}
	int n = 0;
	for (int j = 0; j <= 9; j++)
	{
		if (input[j] != 3)
		{
			if (input[j] != 4)
			{
				if (input[j] != 5)
				{
					non3[n] = input[j];
					n++;
				}
			}
		}
	}
	n = 0;
	for (int j = 0; j <= 9; j++)
	{
		if (input3[j] == 0)
		{
			input3[j] = non3[n];
			n++;
		}
	}
	static int result[9];
	for (int j = 0; j <= 9; j++)
	{
		result[j] = input3[j];
	}
	return result;
}

void printArray(int original[], int fixed[])
{
	printf("fix34({");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", original[i]);
	}
	printf("}) => {");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", fixed[i]);
	}
	printf("}");
}