#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main() {

	//Declare an uninitialized FILE pointer and name it fPointer
	//CODE:

		//ASSIGN fPointer to fopen() with "testAppendToAFile.txt" in first arg and "a" in second arg.
		//CODE:

	//Use an if condition to test if the fPointer exists == (NULL) to test if the file is open.
	//CODE:

		//Call printf() to display a message to the screen if the if condition is true and executes.
		//that there was an error and the file could not be opened.
		//CODE:

		//Return a non-zero value to signal that program failed. return 1 is usually used.
		//CODE:

	//Call the fprintf() with the pointer as the first argument and a sentence for the second arg
	//that that will be printed to the file.
	//CODE:

	//Call the fclose() with the pointer as the argument.
	//CODE:

	printf("\nTest successfully appended the file.");

}