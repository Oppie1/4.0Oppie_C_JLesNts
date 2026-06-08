#include <stdio.h>
#include<stdlib.h>


//Program that checks whether a person likes bagels based on their input.
//Uses an if statement to handle both a 'yes'  and 'no' response.
//**"||" is the logical OR operator -> condition A OR condition B must be true.**

int main() {

	//call a printf() function that says what the program does. It demonstrates
	//the or || operator.
	//CODE:
	printf("---This program demonstrates the '|| -> or operator---\n");

	//Declare an uninitialized char variable called 'answer' to store a single character
	//from the user. 

	//Prompt the user a y/n type question like do they like bagels or something.
	//CODE:
	printf("Do you like bagels y/n?\n");

	//Read a single character from the user and store it in 'answer'. The & before
	//answer provides the memory address of the variable.
	// 
	//IMPROTANT: The space before the _%c is intentional - it tells scanf_s to skip
	//any whitespace or leftover characters in the input buffer.
	//CODE:

	//Check if the user entered either a 'y' or a 'n' using the OR || operator.
	//Use an if condition to test in the same fashion as you did the last tutorial((y)OR(n))
	//If either are true have the if block execute that they entered either a y or n
	//CODE:

		//So first use an if to test if the user entered (stored in answer variable) a y
		//Then print to screen that they like bagels.
		//CODE:

		//Now use an else statement to capture if the person selected n and 
		//did not like bagels. NOTICE, else just captures the remainder so no need for if(a=n)
		//Shorter, cleaner... Then print that they do not like bagels to the screen.
		//CODE:
	
	//Make a else convergent zone that captures a wrong key stroke.

	printf("\n\n-----------------------------\n");
	//Just instructions. Do not delete.
	printf("\n---Second part of program using integers, less than and greater than.---");
	printf("\nWrite backend program with no user input measuring two sets of if conditions\n");
	printf("\n");

	//Use an if statement with two conditions that are joined by the OR || operator.
	//Use this logic in your example: 5 is not greater
	//than 90 and for the second condition 10 equals == 10. if statement is true and you
	//execute the print codeblock which could say 5 may not be greater than 90 but 
	//10 DOES equal 10. 
	//CODE:

		//CODE:

		//Now use an else statement that would catch all/confirm that both statements are false
		//and prints a message declaring that to the screen.
		//CODE:

}