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
	int myArray[9];
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
		if ((input[j] != 3) && (input[j] != 4) && (input[j] != 5))
		{
			non3[n] = input[j];
			n++;
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
	for (char j = 0; j <= 9; j++)
	{
		result.myArray[j] = input[j];
	}
	return result;
}

void printArray(int input[])
{
	Values result = fix34(input);
	printf("fix34({");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("}) => {");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", result.myArray[i]);
	}
	printf("}");
}