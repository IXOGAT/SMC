/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <stdlib.h>;
int * fix34(int input[]);
void printArray(int input[]);
int amount;
int main(void)
{
	/*Large arrays are only being generated to prevent overflow*/
	int input[25];
	char temp[8];
	printf("Enter the values of the array, pressing enter after each one, and type done when all values are inputted:");
	for (amount = 1; amount > 0; amount++) 
	{
		printf("\nEnter value %d:", amount);
		gets(temp);
		/*atoi is part of the stdlib.h library, it reads the full length of an array*/
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
	int *official;
	official = malloc(sizeof(int) * length);
	for (length; length >= 0; length--)
	{
		official[length] = input[length];
	}
	free(official);

	printArray(input);
	getchar();
	return 0;
}

int * fix34(int input[])
{
	int length = amount - 1;
	static int input3[30];
	int non3[50];
	int inputclr[50];
	/*copying input from fake array to real array*/
	for (int i = 0; i <= length; i++)
	{
		inputclr[i] = input[i];
	}
	int i = 0;
	for (i; i <= length; i++)
	{
		if (input[i] == 3)
		{
			input3[i] = 3;
			input3[i + 1] = 4;
			input3[i + 2] = 5;
		}
	}
	int n = 0;
	for (int j = 0; j <= length; j++)
	{
		if ((inputclr[j] != 3) && (inputclr[j] != 4) && (inputclr[j] != 5))
		{
			non3[n] = inputclr[j];
			n++;
		}
	}
	n = 0;
	for (int j = 0; j <= length; j++)
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
	int length = amount - 2;
	int *result;
	result = fix34(input);
	printf("fix34({");
	for (int i = 0; i <= length ; i++)
	{
		printf("%d, ", input[i]);
	}
	printf("}) => {");
	for (int i = 0; i <= length; i++)
	{
		printf("%d, ", result[i]);
	}
	printf("}");
}