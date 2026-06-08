#include<stdio.h>
#include<stdlib.h>


int main()
{

	//Declare three integer variables to hold whole number values.
	//CODE:

	//Assign the same value (say 100) to multiple variables in a single statement by chaining the assignment
	//operator (=) from right to left. Since a, b and c were already declared as int above, there is no 
	//need to repeat the data type "int" - it stays with the variable for its entire lifetime. Remember
	//CODE:

	//Print the values of a, b and c to the console. Each %d acts as a placeholder that gets replaced by
	//its corresponding integer variable in the argument list.
	//CODE:

	//Declare three float variables for 3 ages and one to store the result of average. Declare average variable
	//with the age variables as a float.
	//When data type declared on the same line only have to declare data type once (here float).
	//CODE:
	
	//Assign age1 and age2 equal to each other and the same value "10" here
	//CODE:

	//Call a print function to prompt user to enter 3 ages.
	//CODE:
	printf("\nPlease enter your age:\n");

		//The %f specifier tells scanf_s to expect a decimal number,
		//&age# provides the memory address where the input will be stored.
		//Call a scanf_s() function to read in age1, age2 and age3 (remember to use &).
		//CODE:

	//Calculate the average by summing all three ages and dividing by 3.
	//Also, you will need to use "()" (age# + age )  because we divide by 3 -> order of operations.
	//CODE:

	//Call printf() to show a sentence with average out to the screen.
	//CODE:

}