//A struct groups related variables (called members) under a single name
//You can define multiple structs with different names to represent different entities.

//Declare a struct named user. struct is like class. user is like blueprint object.
//CODE:
struct user {

	//These are the members of the struct - each one holds a specific piece of data.
	//Declare an uninitialized int variable named userID.
	//CODE:
	int userID;

	//Declare an uninitialized char array that has 25 elements named firstName.
	//CODE:
	char firstName[25];

	//Declare a char array uninitialized  named lastName with 25 elements
	//CODE:
	char lastName[25];

	//Declare an uninitialized int variable to hold age;
	int age;

	//Declare an uninitialized float variable to hold weight.
	float weight;

}; //You need a semiclon here.
