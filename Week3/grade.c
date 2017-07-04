/*  All code originally written by Alex Mononen
CS 50
6/27/2017
*/

#include <stdio.h>;
#include <math.h>;
#include <stdbool.h>;
int main(void)
{
	/*typedef int bool;
#define true 1;
#define false 0;
*/
	printf("Please input student scores one at a time.\n");
	int input;
	int grades[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Student ");
		printf("%d", i+1);
		printf(":");
		scanf_s("%d", &input);
		if (input > 100 || input < 0)
		{
			//invalid value
			//lowercase to help identify
			printf("try again!");
			i = i - 1;
		}
		else
		{
			//valid value
			grades[i] = input;
		}
	}
	printf("******************FINAL RESULTS******************\n");
	//a is average, b is maximum, c is minimum
	int avg = average(grades);
	int max = maximum(grades);
	int min = minimum(grades);
	printf("The maximum score is : %d", max);
	printf("\n");
	printf("The minimum score is : %d", min);
	printf("\n");
	printf("The average score is : %d", avg);
	getchar();
	getchar();
	getchar();
}

int average(int grades[10])
{
	int added = 0;
	for (int i = 0; i < 10; i++)
	{
		added = added + grades[i];
	}
	int result = added / 10;
	return result;
}

int maximum(int grades[10])
{
	int ptr = grades[0];
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] > ptr)
		{
			ptr = grades[i];
		}
	}
	return ptr;
}

int minimum (int grades[10])
{
	int ptr2 = grades[0];
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] < ptr2)
		{
			ptr2 = grades[i];
		}
	}
	return ptr2;
}