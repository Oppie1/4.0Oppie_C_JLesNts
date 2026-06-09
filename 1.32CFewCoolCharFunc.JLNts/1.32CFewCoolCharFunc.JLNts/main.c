#include<stdio.h>
#include<ctype.h>//The ctype.h library provides functions for testing characters, such as isalpha() and isdigit()


//Character classification functions work with an int variable, even when that variable holds a character
//literal (e.g 'A'). or a symbol e.g. '$'. Try changing the value assigned to the exampleDataType variable
//below to see different results.//REMEMBER these functions allow you to use %c in every instance.


int main()
{

	//Declare an int variable named exampleDataType and initialize it to '$';
	//CODE:

	//Use an if statement with the isalpha() function with the argument exampleDataType to test whether an
	//alphabetic character was entered-> if exampleDataType does not = A,b,x, ect. it will be skipped.
	//CODE:

		//Print message to the screen that example data type is a letter using (%c,variable) syntax
		//CODE:
	
	//Make a else if statement that the if statement nested in the outer if that test isdigit()
	//in the same way you did isalpha(),
	//CODE:

			//Show message to screen that says character is not a digit in the same why you did isalpha() but with digit
			//CODE:
			
		//If the value is neither a letter nor a digit like a symbol (e.g. '$', '!', '@', ect.) this fallback
		//else handles all the remaining possibilities.
		//Use follow up else statement that will function as a catch-all other possibilities AFTER the else/if above.
		//CODE:

}