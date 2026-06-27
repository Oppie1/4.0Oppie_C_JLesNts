#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//Lesson overview: Learning how to use the integer absolute value function, abs().

int main() {

	//Set up three empty integer variables: one for the birth year, one for the current year,
	//and one to hold the calculated age.
	//CODE:

	//Ask the user to provide the year of their birth.
	//CODE:
	printf("What year were you born?\n");

	//Capture the user's birth year from the console using scanf_s.
	//CODE:

	//Ask the user to provide the current year.
	//CODE:
	printf("What is the current year?\n");

	//Capture the current year from the console using scanf_s().
	//CODE:

	//Subtract the birth year from the current year to find age.
	//Heads up: If the user swaps the inputs (providing the current year first),
	//it acts as a smaller number minus a larger number, resulting in a negative age!
	//CODE:

	//Fix potential negative ages by passing the result through abs().
	//The abs() command is included in <stdlib.h> and resolves the absolute value of an int.
	//Usage: abs(your_integer_here).
	//Behavior: Turns negative values positive, and leaves positive values entirely alone.
	//CODE:

	//Print out the corrected, strictly-positive age to the console.
	//CODE:

}