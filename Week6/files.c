/*	All code originally written by Alex Mononen
	CS50
	7/24/2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(suppress : 4996)
int counter = 0;

int main(void)
{
	FILE *userpass = fopen("usernamesPasswords.txt", "w");
	FILE *user = fopen("usernames.txt", "r");
	FILE *pass = fopen("passwords.txt", "r");
	char *tempUser;
	char *tempPass;
	tempUser = malloc(sizeof(char) * 32);
	tempPass = malloc(sizeof(char) * 32);
	while ((fgets(tempUser, sizeof tempUser, user) != NULL) || (fgets(tempPass, sizeof tempPass, pass) != NULL))
	{
		int userLen = strlen(tempUser);
		int passLen = strlen(tempPass);
		fwrite(tempUser, sizeof(char), userLen, userpass);
		fwrite(tempPass, sizeof(char), passLen, userpass);
		//fprintf(userpass, "%s    %s", tempUser, tempPass);
		//counter++;
	}
	fclose(userpass, user, pass);
}