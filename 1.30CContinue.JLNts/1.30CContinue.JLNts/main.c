#include<stdio.h>



int main()
{
	//Declare an uninitialized variable called num to hold the user input later
	//CODE:

	//Declare the int variable num and initialize it to 1.
	//IMPORTANT. So although num is initialized to 1 here it is overwritten to new number each pass.
	//CODE:

	//Prompt the user to type a number between 1 and 10
	//CODE:
	printf("Please enter a number between 1 and 10.\n");

	//Scan in the int the user selects and store
	//in num's memory address.
	//CODE:

	//Print out to screen which number the user selected in a complete sentence with
	//format specifier and the storage variable.
	//CODE:

	//Use a do while loop with a nested if statement that contains the keyword 
	//continue (bypass). In the if loop if 6 OR 8 OR num is selected the codeblock executes
	//it first increments 6 or 8 to the next number (7 or 9) and then moves on to 
	//next step in code. I
	//Start by creating a do condition.
	//CODE:

		//Check  whether the current counter 'i' equals 6,8, or the chosen number.
		//If none are true the if-block is skipped entirely and we fall through to the printf below,
		//which prints 'i' as an available number.
//Use a nested if statement to test whether: 
// i == 6 OR(||) 8 OR|| if it == num (number they selected)
		//CODE:

			//Increment i within the if statement and then use the 
			//continue keyword to get back to the outer loop.
			//CODE:

			//keyword.
			//CODE:

		//Print a sentence using format specifier and the i storage variable to 
		//the screen that says number is available.
		//CODE:

		//Increment i by 1 so that the current number is increased before being tested
		//in the while control condition.
		//CODE:

		//Create a while condition that will stop the loop
		//if i is less than 11 (to capture all 10 numbers).
		//CODE:

}