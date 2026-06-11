#include<stdio.h>
#include<string.h>



int main() {


	//Declare a uninitialized character array (buffer) to hold the cat's name. With 50 elements.
	//CODE:

	//Declare uninitialized char array that has a smaller buffer for the cat's favorite food up to 25 char.
	//CODE:

	//Declare a buffer for the final assembled sentence that is initialized to " " just blank quotes.
	//75 characters is the hard limit.
	//CODE:

	//Prompt the user for the cat's name.
	//puts(); function works like printf() but automatically appends a new line at the end.
	//CODE:

	//Call gets() function to read the full line of input into catsName.
	//Remember gets() with catsName variable as parameter.
	//CODE:

	//Prompt the user for the cat's favorite food using the puts() function.
	//CODE:

		//Same reasoning as previous puts/gets above. - gets() captures the entire input including spaces.
		//Use a get() to read in user info into the catsFood variable/parameter
		//CODE:

	//Call strcat_s() function to scan in user info into three slots, the first is the % spec for string, 
	//The second is the sizeof() with sentence as the parameter to lock in the number of elements of the sentence.
	//And the third is to see in the catsName variable. This will build the first part of the sentence.
	//CODE:

	//Call strcat_s in the same way as you did above. third part just right a piece of a sentence that makes 
	//sense to connect the beginning  and the end of the sentence (next bit of code) something like "loves to eat".
	//CODE:

	//Call in same way you just did above using strcat_s to add in the cats food to the sentence at the end.
	//CODE:

	//Call a puts() function with the sentence variable as its argument to print the sentence you made to screen
	//CODE:

}