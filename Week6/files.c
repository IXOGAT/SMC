/*	All code originally written by Alex Mononen
	CS50
	7/24/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *userpass = fopen("usernamesPasswords.txt", "w+");
	FILE *user = fopen("usernames.txt", "r");
	FILE *pass = fopen("passwords.txt", "r");
	char *tempUser, *tempPass;
	tempUser = malloc(sizeof(char) * 32);
	tempPass = malloc(sizeof(char) * 32);
	while (1)
	{
		if (fgets(tempUser, sizeof(char) * 32, user) == NULL) break;
		if (fgets(tempPass, sizeof(char) * 32, pass) == NULL) break;
		int userLen = strlen(tempUser);
		tempUser[userLen - 1] = '\0';
		fprintf(userpass, "%s", tempUser);
		int amount = 32 - userLen;
		while (amount > 0)
		{
			fprintf(userpass, " ");
			amount--;
		}
		fprintf(userpass, "%s", tempPass);
	}
	fclose(userpass, user, pass);
}