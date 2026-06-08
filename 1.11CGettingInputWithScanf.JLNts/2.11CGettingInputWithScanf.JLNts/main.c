#include <stdio.h>
#include<stdlib.h>



int main() {

	//A character array that acts as a bucket to hold up to 20 characters of text.
	//Use %s in printf/scanf to work with strings (multiple characters) of text.
	//Use %c instead if you only need to store a single character.
	//Declare a character array with 20 uninitialized element slots for first name.
	//CODE:
	int firstName[20];

	//Capping the size at 20 characters protects against a buffer overflow.
	//Declare a character array that holds 20 uninitialized elements to hold your crushes name.
	//CODE:
	int crush[20];

	//Declare an uninitialized integer variable that will hold the number of puppies.
	//CODE:
	int numberOfPuppies;

	//Prompt the user by printing message out to screen requesting their name.
	//CODE:
	printf("Hello, what is your name?\n");

		//scanf_s reads the user's input %s and stores it in firstName.
		//The 20 tells the function the maximum number of characters it is allowed to write.
		//Scan in user input with parameters for the string ("  "), firstName variable and number of elements.
		//The & operator gives scanf_s the memory address of a variable so it knows exactly where to write
		//incoming data. For arrays, the array name already represents an address, so & is omitted here.
		//CODE:
		scanf_s("%s", firstName, 20);

	//Prompt user with a print statement and ask them who their crush is.
	//CODE:
		printf("Who is your crush?\n");

	//Scan in the users input in the same way you did first name.
	//CODE:
		scanf_s("%s", crush, 20);

	//Prompt user with a third print statement asking how many puppies they will have.
	//CODE:
		printf("How many puppies will you have together?\n");

			//numberOfPuppies is a plain integer, not an array, so & IS required to pass in its address to scanf_s
			//in order to adjust the value at that memory location. Must use & for variables memory location.
			//Scan in user data with parameter for an int (%d) and the numberOfPuppies variable.
			//CODE:
			scanf_s("%d", &numberOfPuppies);

	//Call printf() on all three stored values into on readable sentence. Each format specifier (%s, %s, %d) maps
	//in order to the variable listed at the end - sequence matters here.
	//CODE:
			printf("\n%s and %s are going to have %d puppies together.\n", firstName, crush, numberOfPuppies);

}

/*

scanf_s("%s", crush, 20) -> tells scanf_s the upper limit of bytes it may write into that memory at runtime,
preventing it from writing past the end of the buffer and corrupting other data.
*/