/* All code originally written by Alex Mononen 
	CS 50
	6/21/2017
*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//printing out instructions and confirming player readiness
	printf("Welcome to the game of Guess It! \n");
	printf("I will choose a number between 1 and 200 \n");
	printf("You will try to guess that number. If you guess wrong, I will tell you if you guessed too high to too low.\n");
	printf("You will have 5 tires to get the number.\n");
	printf("OK. I am thinking of a number. Try to guess it.\n");
	//declaration of the function
	int guessfunc = guessing();
}

int guessing(void)
{
	//creating bool datatype
	typedef int bool;
#define true 1;
#define false 0;
	//requsition of different seed at start of program, ensures different random numbers.
	srand(time(NULL));
	//random number generation from 1 - 200
	int random = rand() % 200 + 1;

	//guessing
	bool win = false;
	int i = 0;
	while (i < 5)
	{
		i++;
		{
			printf("Your guess?\n");
			int guess;
			scanf_s("%d", &guess);
			//logic!
			if (guess > random && guess < 200)
			{
				printf("Too high!\n");
			}
			else if (guess < random && guess > 0)
			{
				printf("Too low!\n");
			}
			else if (guess == random)
			{
				printf("*****CORRECT*****");
				printf("Want to play again?");
				char again;
				scanf_s(" %c", &again);
				if (again == 'y')
				{
					//redeclaration of the function
					int guessfunc = guessing();
				}
				else
				{
					printf("Goodbye, It was fun. Play again soon.");
					break;
					break;
				}
				break;
			}
			else
			{
				printf("Illegeal guess. Your number must be between 1 and 200.");
			}
		}
	}
	return 0;
}