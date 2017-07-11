#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Input a string: ");
	char input[50];
	scanf_s("%s", input);
	int ptr = 0;
	char duplicates[40];
	for (int i = 0; i <= 52; i++)
	{
		for (int n = i; n <= 52; n++)
		{
			if (input[i] == input[n])
			{
				duplicates[ptr] = input[i];
				ptr++;
			}
		}
	}
	printf("%s", duplicates);
	getchar();
	getchar();
	return 0;
}