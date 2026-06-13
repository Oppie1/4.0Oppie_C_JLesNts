#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//Just write a sentence that is 20 char and manipulate it like you're not an idiot.

int main()

{
	//Declare an uninitialized FILE pointer named fpointer.
	//CODE:

	//ASSIGN fpointer to the value of the function fopen() with the arguments of
	//"TestTextFile.txt" and "w+".
	//CODE:

	//Call fputs() with a short sentence as the an argument and the fPointer
	//in next arg so the computer knows what to write the sentence to.
	//CODE:
	
	//Call fseek() with the fPointer as the first argument which will pull up the file
	//the second argument is 13 which is where to place the cursor. The third arg
	//is SEEK_SET which just says start counting from the beginning of the file.
	//CODE:

	//Call an fputs() with two arguments: One to replace Adam -> Aten " " and the
	//other is where (in file) which we use a pointer to access.
	//CODE:

	//Call the fseek() again with the fPointer as the first argument, -1 as the 2nd
	//and SEEK_END as the third.
	//CODE:

	//Call the fputs() to display a 3 with a blank spot in front of it to the screen
	//CODE:

	//Use fclose() with the fPointer as the parameter to close the file.
	//CODE:

}

//SEEK_SET - offset is relative to the beginning of the file.
//SEEK_END - offset is relative to the beginning of the file,
//SEEK_CUR - offset is relative to the current cursor position.