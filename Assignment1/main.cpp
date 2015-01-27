/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#1 : Linked Lists
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 1/27/2015
 *********************************************************/

#include "header.h"

int main()
{

	//PRINT HEADING
	cout << "*****************************************\n";
	cout << "   Programmed by: Dori J. Mouawad\n";
	cout << "   Student ID   : 356008\n";
	cout << "   CS1D         : TTH- 5p-9:20\n";
	cout << "   Assignment#1 : Linked Lists\n";
	cout << "*****************************************\n";

	//Declares all strings.
	string string1 = "dad";
	string string2 = "radar";
	string string3 = "Otto";
	string string4 = "mom";
	string string5 = "tigers";
	string string6 = "A man, a plan, a canal, Panama";
	string string7 = "Isn’t this class cool?";
	string string8 = "Was it a car or a cat I saw?";
	string string9 = "Sit on a potato pan, Otis";
	string string10 = "Saddleback is a great place to learn";

	//Calls the initialize queue function for all strings
	initializeQueue(string1);
	initializeQueue(string2);
	initializeQueue(string3);
	initializeQueue(string4);
	initializeQueue(string5);
	initializeQueue(string6);
	initializeQueue(string7);
	initializeQueue(string8);
	initializeQueue(string9);
	initializeQueue(string10);

//	isPalindrome (astring);

	return 0;
}

