#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Call the srand() function with the time function as its parameter. The time function
	//should have NULL as its argument.
	//CODE:

	//Declare 3 uninitialized int variables. One as a loop counter i one called temp to hold the 
	//temp value before to swap later and the last called swapped which will hold swapped var.
	//CODE:

	//Declare an int variable named howMany that is initialized to 3.
	//CODE:

	//Declare an uninitialized goals array with 3 elements.
	//CODE:

	//Create a for loop that starts i at 0, if i is less than how many, then increments i by 1
	//CODE:

		//Assign the current position [i] of the goals array to the rand function with no parameters 
		//modulus 10. Then add 1 to the expression to eliminate the computer 0. Humanize it.
		//CODE:

	printf("Original List\n");
	//Create a for loop to match the for loop in the first section using i and howMany ++
	//CODE:

		//Call printf() with format specifier,first arg and matching current goal element 2nd arg
		//CODE:

	//Create a while loop with 1 as its parameter.
	//CODE:

		//Initialize the int swapped variable (just swapped since already declared) to 0.
		//CODE:

		//Create a for loop that uses this logic by using "howMany - 1" in the condition/control.
		//This way it accounts for comparing the last element with the element to the left of
		//it since i = 0. We don't want to reach the last element without comparison property.
		//CODE:

			//Use a nested if statement to see if the current element of goal[i]
			//is greater than the next element of goal[i] -> goal[i + 1]
			//CODE:

				//Assign the temp variable to the current goals[i].
				//CODE:

				//Assign the current element goals[i] to the next position i + 1.
				//CODE:

				//Assign the next element to the value stored in temp.
				//CODE:

				//Overwrite swapped = 0 to 1 within the if statement. Swap will stay 0 if the
				//if statement were skipped (false) where the current goals is not greater
				//than the next goals. Set swapped variable to 1;
				//CODE:
		

		//Use an if statement to see if the swapped variable equals 0 (not assignment so == not =. Codeblock = break.
		//CODE:

		printf("\nSorted List\n");

		//Use a for loop to match the first for loop you created in the unsorted list. It should
		//be identical but will produce a sorted list.
		//CODE:

		//Use the same format for the print statement as well.
			//CODE:

}
