/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <stdbool.h>;
#include <math.h>;
/*Structure of 9 int to use to return the damn function thingy*/
typedef struct
{
	int a, b, c, d, e, f, g, h, i;
}Values;
//int fix34(int input[]);
void printArray(int input[]);
int main(void)
{
	int array[9] = { 1, 3, 8, 5, 4, 3, 6, 4, 5 };
	printArray(array);
	getchar();
	
}

Values fix34(int input[])
{
	Values result;	/*Declare 'result' of type 'Values'*/
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
	result.a = input3[0];
	result.b = input3[1];
	result.c = input3[2];
	result.d = input3[3];
	result.e = input3[4];
	result.f = input3[5];
	result.g = input3[6];
	result.h = input3[7];
	result.i = input3[8];
	return result;
}

void printArray(int input[])
{
	Values result = fix34(input);
	int dump[9] = { result.a, result.b, result.c, result.d, result.e, result.f, result.g, result.h, result.i };
	printf("fix34({");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("}) => {");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", dump[i]);
	}
	printf("}");
}