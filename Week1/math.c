/* All code originally written by Alex Mononen 
	CS 50
	6/21/2017
*/
#include <stdio.h>

int main(void) 
{
	printf("Enter an integer: ");
	int int1;
	scanf_s(" %d", &int1);
	printf("\n Enter another integer: ");
	int int2;
	scanf_s(" %d", &int2);
	int add = int1 + int2;
	int sub = int1 - int2;
	printf("%d", int1);
	printf(" + ");
	printf("%d", int2);
	printf(" = ");
	printf("%d", add);
	printf("\n");
	printf("%d", int1);
	printf(" - ");
	printf("%d", int2);
	printf(" = ");
	printf("%d", sub);
	getchar();
	getchar();
}