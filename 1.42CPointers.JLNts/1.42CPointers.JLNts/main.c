#include<stdio.h>



//%p is the format specifier for printing a memory address -- printf(%p, &tuna)(

int main() {

	//Declare an integer named tuna and initialize it to 19
	//CODE:

	printf("Address\t\t\tName\t\tValue\n");
	//Since we often need to pass addresses around in the program, we use the special type of 
	//variable designed to hold them. These are called "Pointers"
	
	//Call a printf() %p = pointer, ect.. Remember when using pointer it must match a memory
	//address so you need this symbol & in the 2nd but NOT 3rd, 4th argument to match
	//the other two format access specifiers.
	//CODE:

	printf("\n\nUsing Pointers to demonstrate setting a pointer to a memory address\n\n");

	
	//Declare a int pointer pVar using * in between the data type and the variable that is 
	//initialized to the memory address of tuna.
	//CODE:

	printf("Address\t\t\t \Name\t\tValue\n");

	//Call a printf() with the arg1 a sentence that uses each way to print the format specifiers 
	//we used earlier tuna values to the screen and then in the 2nd arg use the pointer you just 
	//created, 3rd "tuna" matching string and finally the 4th arg being just the og variable tuna.
	//CODE:

	//Call printf() to show details of the pointer variable itself (pTuna) using %p %s and %p again.  
	//We use %p and matching 6 arg (just variable) because we are not talking about the value inside tuna (%d)
	//We are talking about the value INSIDE the pointer which is tuna's address.
	//CODE:

}