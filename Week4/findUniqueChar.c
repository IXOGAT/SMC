/*  All code originally written by Alex Mononen
CS 50
6/27/2017
*/
#include <stdio.h>
#define BUFF_SIZE 512

int main(void)
{
	char inarray[BUFF_SIZE];
	char *inptr;
	printf("INPUT A STRING \n> ");
	inptr = fgets(inarray, BUFF_SIZE, stdin);
	int ptr = 0;
	char duplicates[BUFF_SIZE];
	char print;
	int n = 0;
	int len = strlen(inptr) - 1;

	for (char i = 65; i <= 123; i++)
	{
		while (n < len)
		{
			if (inptr[n] == i)
			{

			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		n = i;
		while (n < len)
		{
			if (inptr[i] == inptr[n])
			{
				duplicates[ptr] = inptr[n];
				ptr++;
			}
			n++;
		}
	}
	n = 0;
	for (int i = 0; i < len; i++)
	{
		while (n < len)
		{
			if (duplicates[i] != inptr[n])
			{
				print = inptr[n];
				n++;
				//ptr++;
			}
			n++;
		}
		n = 0;
	}
	//printf("%s", duplicates);
	printf("\n%c", print);
	getchar();
	getchar();
	return 0;
}