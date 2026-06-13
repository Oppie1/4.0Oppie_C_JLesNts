#include<stdio.h>
#include<stdlib.h>



int main() {

	
	//Declare a FILE pointer (*) and name it fPointer.

	//So within the condition the fopen_s() executes and creates a file with the three arguments as its context.
	//IMPORTANT-> the function fopen_s() executes before the second portion of the if condition AND just like a 
	//"main()/program" if it is successful -> return 0. So that is where the 0 comes from. So as long as the
	// function was able to open the memory location of the file, create a test file, and allows to write to
	//it the function is successful and returns 0.

	//Use an if statement with the condition fopen_s()->Containing parameters of the memory location & of fPointer,
	//in first arg, the 2nd arg"TestTextFile.txt" string to open file, 3rd arg being open the file in
	//write mode using "w" to create the file if it doesnt exist or wipe it clean if it does. 
	//CODE:

		//Call the perror() with the parameter "Enter opening file" as the parameter.
		//CODE:

		//Exit the program with a non-zero code to signal that an error occurred by using 1 as the return value (return 1).
		//CODE:
		
	//Call the fprintf() to write to the file using the file pointer and a sentence of your choosing as arg (2 arg).
	//CODE:

	printf("If you're seeing this message you correctly wrote to a file. Go check it out in folder.\n");
}

//Sequential access reads or writes file data in order from start to finish, like reading a book page by page
//Random access allows jumping directly to any position in the file, regardless of order.