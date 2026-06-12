#include<stdio.h>
#include<stdlib.h>



int main() {


	//Declare an uninitialized int pointer named points.
	int* points;

	//Assign points pointer to the amount of memory requested from the heap. Use an int* typecast pointer,
	//The malloc() with the parameter of 5 times the sizeof() with int as its parameter.
	//CODE:
	points = (int*)malloc(5 * sizeof(int));

	printf("Memory successfully borrowed from the heap for 5 integers.\n");
	//Call a printf() function with logical sentence in first argument with the amount of bytes we 
	//are taking from the heap using EXPRESSION from the parameter of the malloc function above.
	//CODE:
	printf("We are going to be taking %d from the heap", 5 * sizeof(int));

	//Call the free() with the parameter points to free up the bytes held in points storage.
	//CODE:

	free(points);

	printf("\n\nMemory has been returned to the heap.\n");

}