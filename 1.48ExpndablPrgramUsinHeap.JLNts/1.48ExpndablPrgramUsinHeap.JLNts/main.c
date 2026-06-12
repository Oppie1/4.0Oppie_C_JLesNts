#include<stdio.h>
#include<stdlib.h>



int main() {

	//Declare an uninitialized int variable for the loop counter as well as an int
	//variable to store how many numbers the user wants to average (howMany)
	//CODE:

	//Declare an int variable named total and initialize it to 0.
	//CODE:

	//Declare a float variable named average an initialize it to 0.
	//CODE:

	//Declare an uninitialized int pointer named pointsArray.
	//CODE:

	printf("\nHow many numbers do you want to average?\n");

	//Call the scanf_s() to bring in info into the memory address of how many.
	//CODE:

	//Assign pointsArray int pointer to the expression that will request memory from the 
	//heap at runtime -> remember int* type cast malloc(2parameters sizeof()) howMany int
	//CODE:

	printf("\nGo ahead and enter those numbers:\n");

	//Construct a for loop that will go through howMany user entries with counter variable
	//starting at 0, comparing counter to howMany and increment it by ++ (1)
	//CODE:

		//Scan in the user chosen numbers into the memory location of the given element 
		//of the pointsArray[i].
		//CODE:

		//Assign total an expression that takes the last value entered in the points array
		//elements and adds it to the next.
		//CODE:

		//Assign the variable average to the result of the total divided by how may numbers
	//the user entered. Remember since we are dealing with decimal we must float typecast.
	//CODE:

	//Call printf() to display the average to the screen.
	//CODE:

}