/*	All code originally written by Alex Mononen
	CS50
	some day during suummer 2017...
*/
#include <stdio.h>
#define BUFF_SIZE 512

int main(void)
{
	char inarray[BUFF_SIZE];
	char *inptr;
	printf("Let's check if a string is a palindrome.\n");
	printf("please give me your string : ");
	inptr = fgets(inarray, BUFF_SIZE, stdin);
	int len = strlen(inptr);
	int mdpt = len / 2;
	int match = 0;
	int i = 0;
	int n = len - 2;
	while (i <= mdpt)
	{
		if (inptr[n] == inptr[i])
		{
			match++;
		}
		i++;
		n--;
	}
	if (match == mdpt+1)
	{
		printf("Yes, it is a palindrome!");
	}
	else 
	{
		printf("No, it is not a palindrome.");
	}
	getchar();
}