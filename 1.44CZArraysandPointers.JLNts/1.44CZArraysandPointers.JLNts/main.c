#include<stdio.h>



int main() {


	//Declare an uninitialized int variable to act as a loop counter.
	//CODE:

	//Declare an integer array meatBalls with 5 elements and initialize them to some random values.
	//CODE:
	
	//Create for loop that initializes i to 0, a condition that i is less than 5 increment i by 1
	//CODE:

			//Call a print statement that will use a sentence in the first argument, the value
			//of the current iteration i digit in second arg, the  memory address of each meatball 
			// element in 3rd argument and the actual value of each meatball element in the 
			// 4th argument. Printing on line during each iteration.
			//CODE:

	//Array name by itself acts as a pointer to its first element. Here, meatBalls holds
	//the memory address of meatBalls[0].
	//Call a print statement to demonstrate that the meatballs array is memory address of the first element.
	//CODE:

	//Call a print statement that gives the int value of meatballs by using *.
	//CODE:

	//Call printf(%p) that adds two to the array (3rd element of meatBalls) and shows memory 
	//address at that location. REMEMBER memory address in first arg is ALWAYS %p
	//CODE:

	//Wrapping (meatBalls + 2) dereferences that address, printing the actual value
	//stored at the third element.IMPORTANT: in matching portion it is necessary to use *(expression here)
	//Call printf() to demonstrate above statement. Remember when * is used we access value.
	//CODE:

}

//Key takeaway: An array's name alone - without brackets or an index - is simply
//a pointer to its first element. You never need to write &meatBalls[0] explicitly.

//Dereferencing an array name retrieves the value at its first element. To reach other
//elements, add an offset to the array name (e.g., meatBalls + 2) and then dereference the
//result with *.