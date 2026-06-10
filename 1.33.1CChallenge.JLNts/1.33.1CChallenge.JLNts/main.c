#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main() {

	//Declare a char array named 'password' with 10 elements to store the user's input
	//All elements are initialized to 0 (null characters) by default.
	//CODE:
	char password[10];


	//Declare 3 int variables all initialized to 0. These will act as int flags for lowercase
	//and uppercase letters and another for a digit. Set to 0 for false and latter
	//on can be set to 1 when condition is true.
	//CODE:

	int lowerCase = 0, upperCase = 0, digit = 0;

	printf("Please enter a strong password!\n");
	printf("Must contain uppercase, lowercase letters and digits.\n");
	printf("No more than 10 characters. No symbols\n");
	printf("Make your password:\n");


	//call scanf_s() and pass 3 arguments: the first using the format specifier for a 
	//string with %9s slots, the second being the variable password that will be passed in,
	//and third using the sizeof() function with the password variable as the argument.
	//CODE:
	scanf_s("%9s", password, sizeof(password));


	//Create a for loop with a counter variable i. It will have 3 slots, the first 
	//is the initialization step. Initialize i to 0, then the second slot will be the
	//condition. It is where we set i < the string length with password as its parameter
	//then the third slot we increment the counter variable i by 1 (i++)
	//CODE:
	for (int i = 0; i < strlen(password); i++) {

		//Make a three nested if statements each of which will check for lowercase, 
		//uppercase, letters and digits using if condition. NOOOOO i...
		//we call the islower() function with password[i] as its argument.
		//Use an if condition to see if i is a lowercase letter. Set to 1 if it is.

					//CODE:
		if (islower(password[i])) {

			lowerCase = 1;
		}
			//Use the second if condition to check for uppercase letters. We use the the same
			//logic as above. The if condition will contain the isupper() function with the 
			//argument of password[i])). Use flag in codeblock to execute flag protocol.
			//CODE:
			if (isupper(password[i])) {

				upperCase = 1;
			}

		//Use an if statement in same way as above the above if's using isdigit().
		//Use the digit variable set to 1 if the if condition is true and the if block 
		//executes it just sets the digit variable from 0 to 1.
		//CODE:
		if (isdigit(password[i])) {

			digit = 1;

		}
	}
	//Use an an if statement with the condition passing in lowerCase AND upperCase AND digit
	//as the arguments. IMPORTANT: They are set equal to each other to see if all are same (1) true.
	//CODE:
	if (lowerCase && upperCase && digit) {

		//Call the print function with a sentence saying they have a strong password.
		//CODE:
		printf("You have entered a strong password.");
	}

	//Use an else statement that within its codeblock uses a print function to say that 
	//They have not entered a a strong password and conditions were not met.
	//CODE:
	else {
		printf("You have not entered a strong password not all conditions were met");

	}

}