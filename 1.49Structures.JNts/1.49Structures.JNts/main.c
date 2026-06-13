#include<stdio.h>
#include<stdlib.h>
//Include the header file so the struct definition is available in this file. ""
//CODE:
#include"EmployeeInfo.h"

//Like objects remember dot separator plays a large part in this tutorial.
//A stuct lets you group variables of different data types under one name.
//For example, a user can have an ID, char name, and a float weight all in one place.
//It is best practice to define structs in a separate header file rather than in main

int main() {

	//Declare two variables of type struct user, each one is independent instance 
	//of the blueprint. struct user copilot and user claude.
	//CODE:
	struct user copilot;
	struct user claude;

	//The dot (.) operator is used to access a specific member of a struct instance.
	//Here we assign a unique ID to each user.
	//ASSIGN copilot and claude user ids using the user id member and numbers of your choice.
	//CODE:
	copilot.userID = 23;
	claude.userID = 11;

	//Use a puts() to prompt user for name of user 1
	//CODE:
	puts("What is the user 1's name");

	//Use a gets() to read in information from struct copilot -> fistName (use dot separator).
	//CODE:
	gets(copilot.firstName);

	puts("Enter the first name of user 2");

	//Use gets() to read in information from struct claude -> firstName.
	//CODE:
	gets(claude.firstName);

	//Use two printf() to display the information to the screen using the struct copilot . (dot separator)
	//and both user id and firstName members. Remember format specifier and matching.
	//CODE:
	printf("The persons user ID is %d while their name is %s\n", copilot.userID, copilot.firstName);


	//Now do the same for claude.
	//CODE:
	printf("The persons user ID is %d while their name is %s", claude.userID, claude.firstName);

}