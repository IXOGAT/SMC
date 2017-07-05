/*  All code originally written by Alex Mononen
CS 50
6/27/2017
*/

#include <stdio.h>;
int * fix34(int input[]);
void printArray(int input[]);
int amount;
int main(void)
{
	/*
	int *input;
	input = malloc(sizeof(int) * 25); /*Input is now an "array" containing 25 memory slots, all of which are empty.*/
	int input[25];
	char temp[8];
	printf("Enter the values of the array, pressing enter after each one, and type done when all values are inputted:");
	for (int amount = 1; amount > 0; amount++) 
	{
		printf("\nEnter value %d:", amount);
		gets(temp);
		int tempint = atoi(temp);
		if ((temp[0] == 'd') || (temp[0] == ' ')) 
		{
			break;
		}
		else
		{
			input[amount - 1] = tempint;
		}
	}
	int length = amount - 1;
	int official[length];
	for (length; length >= 0; length--)
	{
		official[length] = input[length];
	}
	//int array[9] = { 1, 3, 8, 5, 4, 3, 6, 4, 5 };
	printArray(official);
	getchar();

}
int * arrayGen(int length)
{
	int arrayGen[length];
}

int * fix34(int input[])
{
	static int input3[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	return input3;
}

void printArray(int input[])
{
	int *result;
	result = fix34(input);
	printf("fix34({");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("}) => {");
	for (int i = 0; i <= 8; i++)
	{
		printf("%d, ", result[i]);
	}
	printf("}");
}