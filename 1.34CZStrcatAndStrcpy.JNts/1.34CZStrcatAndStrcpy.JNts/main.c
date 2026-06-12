#include<stdio.h>
#include<string.h>
#include<ctype.h>



//This tutorial covers strcpy_s and to upper.
//strcat_ appends one string onto the end of another, with a size parameter that acts as
//a guard against writing beyond the bounds of the destination buffer

//Works through this file in three stages:

//Run the code up to system("cls") to see the concatenated sentence printed .
//Continue through the strcpy_s section to print "Adam is a person! to the screen.
//Review the to upper section at the bottom to see how character casing is handled.

int main() {

	
	//Declare a char array named soy with 100 elements and initialize it to "Hey ".
	//CODE:
	
	//Use a strcat_s() function with the three arguments "soy" to store the users
	//input in a variable, "sizeof(soy)" function with soy argument so computer knows
	//how may slots are available/acceptable and lastly the third argument "Adam " so 
	//the computer knows what to use in the string. Do printf and test.
	//CODE:

	//Use strcat_s again along with the same logic above for the 3
	//arguments to place "you ".
	//CODE:

	//Use strcat_s along with the same logic as above only changing the third slot
	//to "program."
	//CODE:

	//Use the printf() function with the string access specifier in the first
	//slot and the soy variable in the second to show the newly formed
	//sentence to the screen.
	//CODE:

	//Use system() function with "cls" as argument to do this.
	//CODE:

	//Use memset() function with soy argument in first slot, 0 in the 
	//second which will overwrite elements setting them back to 0 (each byte) and then the third
	//slot which says the exact number of slots we are filling.
	//CODE:

	printf("\n\n---Next strcpy_s Example---\n");

		//Use ***strcpy_s****to take a sentence and write  in it what is currently held in soy.
		//Make sure you use soy variable, the sizeof() function with soy as a parameter and
		//the sentence "Adam is a person" in third slot.
		//CODE:

		//Now print that sentence to the screen. Dont forget the format specifier for string.
		//CODE:

	printf("\n---toupper() example---: \n");

	//Declare 3 char variables a, b, c and initialize them to 'b', 'F','7' respectively
	//CODE:

	//Use a printf() using a char access spec in first argument
	//and the the toupper() function in second argument with a as its argument.
	//CODE:

	//Use the print function with %c in first argument and toupper() with b as its 2nd argument
	//CODE:


	//Use the the print function with char format specifier in the first argument and toupper()
	//with c in its 2nd argument.
	//CODE:

}

