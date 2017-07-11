#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool checkNum(char *num);
int len = 0;

int main(void)
{
	char cardNumber[25] = "\0";
	printf("Number: ");
	scanf_s("%s", cardNumber);
	//char confirm;
	len = atoi(cardNumber);

	if ((cardNumber[0] == '3') && ((cardNumber[1] == '4') || (cardNumber[1] == '7')))
	{
		bool confirm = checkNum(cardNumber);
		if (confirm)
		{
			printf("AMEX\n");
		}
		else
		{
			printf("INVALID\n");
		}
	}
	/*
	else if (cardNumber[0] == (51, 52, 53, 54, 55))
	{
	printf
	}
	*/
	return 0;
}
/*massive math loop for luhn program*/
bool checkNum(char *num)
{
	int multCount = 0;
	int nonCount = 0;
	int ptr = 2;
	char tmpMult[15] = "\0";
	char tmpNon[15] = "\0";
	for (int i = len; i > 0; i--)
	{
		if (ptr % 2 == 0)
		{
			tmpMult[multCount] = num[i];
			multCount++;
			ptr++;
		}
		else
		{
			tmpNon[nonCount] = num[i];
			nonCount++;
			ptr++;
		}
	}
	int tmpLen = atoi(tmpMult);
	for (int i = 0; i <= tmpLen; i++)
	{
		tmpMult[i] = tmpMult[i] * 2;
	}
	for (int i = 0; i <= tmpLen; i++)
	{

	}
	return false;
}