#include<stdio.h>
#include<stdlib.h>


//Using if/else rather than just a bunch of if statements to do what you did in last tutorial.

int main() {

	//Declare an uninitialized integer variable to hold the user's age.
	//CODE:

	//Declare a character variable to hold the user's gender.
	//CODE:

	//call printf() function to prompt user to enter their age.
	//CODE:
	printf("How old are you?\n");

	//call scanf_s() function to scan in the users age. Use the & operator to pass in the age into memory location.
	//CODE:

	//call printf() to request the users age.
	//CODE:
	printf("\nWhat is your gender m/f?\n");

	//Read in a single character from the console and stores it in memory address of 'gender'. The leading space before % c
	//discards any leftover whitespace from previous input. The optional argument (e.g. 1) in the
	//third parameter limits how many characters are read, preventing buffer overruns.
	//CODE:

	//Outer if statement. Use if condition to test if user is above 18. If they are
	//print out that they may enter the website.
	//CODE:

		//Nested if statement - runs only when the outer condition above is already true.
		//Checks wether the user identified as male and then prints that a male has entered to screen.
		//CODE:

		//Paired else statement for the nested if condition above.
		//Runs when the user did not enter 'm'.
		//Make else statement that if true executes a codeblock that says a female has entered the website.
		//CODE:

	//Make an else condition that prints that the person is not old enough to enter the website.
	//CODE:

}