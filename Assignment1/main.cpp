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

	string stringAr[10];
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

	stringAr[0] = string1;
	stringAr[1] = string2;
	stringAr[2] = string3;
	stringAr[3] = string4;
	stringAr[4] = string5;
	stringAr[5] = string6;
	stringAr[6] = string7;
	stringAr[7] = string8;
	stringAr[8] = string9;
	stringAr[9] = string10;

	for (int i = 0; i < 10; i++)
	{
		initializeQueue(stringAr[i]);
	}

//	isPalindrome (astring);

	return 0;
}

