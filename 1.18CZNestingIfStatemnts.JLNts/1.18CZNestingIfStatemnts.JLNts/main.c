#include<stdio.h>
#include<stdlib.h>



int main()
{
	//Declare an uninitialized int variable to store the user's age.
	//CODE:

	//Declare a character variable to store the user's gender.
	//CODE:

	//Prompt the user to enter their age.
	//CODE:
	printf("Please enter your age.\n");

	//Call scanf_s function to store age value in int age. There are 2 parameters _ and &.
	//CODE:

	//Prompt user for their gender.
	//CODE:
	printf("What is your gender m or f?\n");

	//Call scanf_s function to read in data. ' %c' reads a single character, the leading space discards
	//any leftover whitespace. 3 parameters & since we have to limit the argument to 1 character so user
	//doesn't enter more.
	//The '1' argument limits the input to exactly one character. Entering more will cause
	//program to fail.
	//CODE:


	//This outer if statement checks whether the user is 18 years or older. The nested if 
	//statements inside will only run if this condition is true, and they execute in the order
	//they are declared.
	//Create an outer if statement with the condition that will measure if the users age is greater
	//than or equal to 18 to print the statement you may enter this website to the screen.
	//CODE:

		//CODE:

		//In nested if statement check if the user is male 'm' by setting the gender
		//variable == to m in the if condition. If yes print they are male to screen.
		//CODE:

		//Now use an if condition in the same fashion to check if the user is a female.
		//If yes write statement they are female and can enter website.
		//CODE:
		
		// Write if condition outside the if with nested ones to test if the person is less than 18. If they
		//are print a statement that they cannot enter the website to the screen.
		//CODE:

}