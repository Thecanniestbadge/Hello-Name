// Programmer:		Thecanniestbadge
// Date:			5/17/2023
// Program Name:	Hello Name
// Chapter:			Basic 
// Description:		This program displays the name of the user and other basic information

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	int userAge = 0;

	// *** Your program goes here ***
	printf("Hello, user\n");

	// prompt
	printf("Enter your age: ");

	// get the age
	scanf("%d", &userAge);
	printf("You are %d years old.\n", userAge);

	printf("\n"); //blank line
	return 0;
} // end main()