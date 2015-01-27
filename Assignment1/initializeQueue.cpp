/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#1 : Linked Lists
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 1/27/2015
 *********************************************************/

#include "header.h"

void initializeQueue(string stringVar)
{
	queue<char> q;
	int max = 0;
	bool palindrome = false;
	char charVar[100];

	max = stringVar.length();
	strcpy(charVar, stringVar.c_str());

	for (int i = 0; i < max; i++)
	{
		if(isalpha(charVar[i]))
		{
			charVar[i] = toupper(charVar[i]);
			q.push(charVar[i]);
		}
	}

	//Calls isPalindrome function
	isPalindrome (q, palindrome);

	//Outputs to the user if its a palidrome or not
	if(palindrome == true)
	{
		cout << stringVar << " is a palindrome!" << endl << endl;
	}
	else
	{
		cout << stringVar << " is NOT a palindrome!" << endl << endl;
	}
}
