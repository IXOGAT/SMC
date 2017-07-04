/*  All code originally written by Alex Mononen
	CS 50
	6/27/2017
*/

#include <stdio.h>;
#include <stdbool.h>;
#include <math.h>;
void fix34(int array[]);
int main(void)
{
	int array[9] = { 1, 3, 8, 5, 4, 3, 6, 4, 5 };
	fix34(array[9]);
	getchar();
}

void fix34(int array[])
{
	//int tmp[9] = array;
	int array3[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 10; i++)
	{
		if (array[i] == 3)
		{
			array3[i] = 3;
		}
	}
}

int printArray(int array[])
{

}