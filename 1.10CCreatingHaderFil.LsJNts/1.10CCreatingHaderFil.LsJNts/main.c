#include<stdio.h>//Gives us access to standard input/output functions like printf

//Create a header file:
//(e.g. PotatoInfo).You need to put the name of the header " " at the top of the main program.
//CODE:

//What does a header file do?
//A header file lets you store reusable values and definitions in one place. When you 
//include it here, the compiler pulls in everything defined in that file before your 
//program runs - keeping your main.c clean and organized. Open "PotatoInfo.h" using 
//the tab at the top of the editor to see what's inside or from solution explorer.

int main() {

	//Assign an int variable named catAge and set it equal to an expression that takes
	//the DOGAGE and divides it by 2 and add 7. You will need to go into the header
	//file and define (#) a dogs name and age. As well as the cats name as well.
	//CODE:

	//%s is a placeholder for a string (text) and %d is a placeholder for a 
	//whole number. DOGNAME and catsAge are substituted in, in the order they appear.
	//catAge was calculated above using DOGAGE from the header file - showing how
	//header constants can feed directly into your program's logic.
	//Note: the order of the arguments must match the placeholders.
	//Make a print statement that says something to the effect where both %s and %d
	//along with a sentence that includes something about the cats age and the dogs name.
	//CODE:

	//Using the second constant from the header file:
	//CATNAME is also defined in "PotatoInfo.h", just like DOGNAME and DOGAGE
	//Adding new constants to the header file makes them instantly available here.
	//Here just use a sentence where you say the cats name. Remember that it must
	//be defined in the header and constant needs to be all upper case.
	//CODE:

}