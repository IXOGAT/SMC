/*  All code originally written by Alex Mononen
CS 50
6/27/2017
*/
#include <stdio.h>
#include <stdlib.h>

/*0 is black, 1 is red*/	
struct Card
{
	char suit;
	int rank;
	//int color;
};
int counter = 0;

int main(void)
{
	struct Card deck[52];
	int n = 0;
	for (int i = 1; i <= 13; i++)
	{
		deck[n].suit = 'C';
		//deck[n].color = 0;
		deck[n].rank = i;
		n++;
	}
	for (int i = 1; i <= 13; i++)
	{
		deck[n].suit = 'D';
		//deck[n].color = 1;
		deck[n].rank = i;
		n++;
	}
	for (int i = 1; i <= 13; i++)
	{
		deck[n].suit = 'H';
		//deck[n].color = 1;
		deck[n].rank = i;
		n++;
	}
	for (int i = 1; i <= 13; i++)
	{
		deck[n].suit = 'S';
		//deck[n].color = 0;
		deck[n].rank = i;
		n++;
	}

	struct Card temp1[52];
	for (int i = 0; i < 52; i++)
	{
		temp1[i].suit = deck[i].suit;
		//temp[i].color = input[i].color;
		temp1[i].rank = deck[i].rank;
	}
	struct Card temp2[52];
	for (int i = 0; i < 52; i++)
	{
		temp2[i].suit = deck[i].suit;
		temp2[i].rank = temp1[i].rank;
	}
	int confirm = 0;
	while (confirm != 53)
	{
		confirm = 0;
		for (int i = 0; i < 52; i++)
		{
			temp2[i].suit = temp1[i].suit;
			temp2[i].rank = temp1[i].rank;
		}
		/*perfect shuffle code*/
		int i, j;

		for (i = j = 0; i < 52 / 2; ++i, j += 2) {
			temp1[j] = temp2[i];
			temp1[j + 1] = temp2[i + 52 / 2];
		}
		/*checking the shuffled array*/
		for (int i = 0; i <= 52; i++)
		{
			if ((temp1[i].rank == deck[i].rank) && (temp1[i].suit == deck[i].suit))
			{
				confirm++;
			}
		}
		counter++;
	}
	if (confirm == 53)
	{
		printf("completed in %i", counter);
	}

	getchar();
}