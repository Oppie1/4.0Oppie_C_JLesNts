#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	
	//Declare 4 int variables for the four dice rolls and remember you only have to 
	//declare data type int once so long as you use , comma separated values.
	//CODE:

	//Declare 2 more uninitialized int variables total and average.
	//CODE:

	//Declare a char variable named userOption.
	//CODE:

	//Call the srand() with the time() with its argument set to NULL as the srand() argument.
	//CODE:

	//These are just instructions so do not erase these in just notes file.
	puts("Betting game");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of the 3 dice (total divided by 3) tells you the number between 1-6.");
	puts("Then guess if next roll (4th dice) is higher(h), lower(l) or same(s) as that avg.\n");

	//Roll the first three dice. rand() generates a large random integer.
	//The modulo operator (% 6) constrains that number to the range 0-5, and adding
	//1 shifts it to the expected dice range (for a human) of 1-6.
	//Assign each of the dice roll variables (1-3) to an expression with the rand() function
	//with no parameters and modulus % (divide but just take the remainder) + 1.
	//You can either just put the rand function itself in () or the rand() and % 6 in () + 1.
	//CODE:
	
	//CODE:
	
	//CODE:

	//Assign "total" to the the sum of the three dice roll variables.
	//CODE:

	//Divide the total by 3 using integer division to get approximate average.
	//Assign average to the total variable divided by 3
	//CODE:

	//Call a printf() with a sentence in first argument that says what each of the dice 
	//rolls are using logic and digit format specifier and matching diceRoll variables in 
	//second  argument. comma separated!
	//CODE:

	//Display the combined total of all three dice using printf() call using logical 
	//sentence in first argument with %d and the variable total in second argument.
	//CODE:

	//Display the approximate avg that the player will be betting against using
	//a logical sentence in printf() with format specifier in first argument and
	//the average variable in the second argument to match.
	//CODE:

	//Now ask the player to enter their guess before the 4th dice is revealed using
	//a logical sentence and a puts() function.
	//CODE:
	puts("Guess if the next roll is higher(h), lower(l) or same(s) as the average:\n");

	
	//Call a scanf_s function with with a character format specifier in the first
	//argument and the memory & address of user option in the second argument.
	//CODE:

	//Assign diceRoll4 to dice roll formula.
	//CODE:

	//Reveal the result of the 4th dice roll to the player using a printf() call.
	//Same concept as other diceRolls with only one variable.
	//CODE:

	//Evaluates whether the player guessed correctly using an if statement. The condition
	//checks 3 possible winning scenarios connected with || (OR): the roll is higher AND &&
	//the guess was 'h'.

	//Use an if condition with that checks if the dice rolls are greater than the user
	//option, less that the user option, or the same as the user option.

//Start with if(a bunch of condition (3 total) with conditions ((dR4><>avg && uOp == 'char') ||
//){  puts ("Good Job you guessed right");   }else{ puts("Sorry....");
//if((dice4>avg)
//CODE:
	
	//The if code block that lets the user know know that they guessed right.
	//CODE:

	//The else block that lets the user know they guessed wrong.
	//CODE:

}