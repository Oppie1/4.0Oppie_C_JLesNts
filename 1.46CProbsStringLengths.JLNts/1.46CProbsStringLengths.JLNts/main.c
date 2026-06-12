#include<stdio.h>


int main() {

	//Declare a char array named movie capable of holding 20 characters (elements).
	//CODE:

	//Declare a char pointer named pMovie initialize it to the movie array. & is not needed because
	//the name of an array is already its memory address.
	//CODE:

	//Call a puts() function to prompt user to enter a movie title.
	//CODE:

	//Any input beyond 20 characters is simply discarded.
	//Call an fgets() function with arguments pMovie as the storage variable
	//A parameter for inputting 20 characters and from the standard input keyboard (stdin)
	//CODE:

	//Call a puts() with the pointer movie parameter to show info you just brought in to the screen.
	//CODE:

}

//Key takeaway: fgets protects against buffer overflows by enforcing a character limit.
