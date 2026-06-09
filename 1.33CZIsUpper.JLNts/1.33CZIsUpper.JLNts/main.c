#include<stdio.h>
#include<ctype.h>



int main() {

	//Declare an int variable named exampleDataType and initialize it to 'g'. 
	//With characters you can use an int variable to test the data type.
	//CODE:

	//Use an if statement with the isalpha() function that has example data type variable
	//as its parameter.
	//CODE:

		//Use an NESTED if statement with isupper() function that has exampleDataType
		//as its parameter to test if it is an uppercase letter.
		//CODE:
		
			//Now include a print statement that uses a function specifier %_
			//to say exampleDataType is an uppercase letter.
			//CODE:
		
			//Use an else statement still inside the outer if statement but outside
			//the inner if to say that _ is a lowercase letter.
			//CODE:
		
	//End of outer if - this closing brace marks where the letter-check block ends.
	//Only if exampleDataType passed isalpha() did the nested if/else run above.

	//Use an else if statement with the isdigit() function and exampleDataType as its
	//parameter to test if exampleDataType is a digit.
	//CODE:

			//Call printf() to say if example data type is a digit.
			//CODE:
	
		//Follow this block with an else statement that will cover if it is not a letter
		//or a number and print message out to screen stating as such.
		//CODE: 
	
}