/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "header.h"

int main()
{
	//PRINT HEADING
	cout << "*****************************************\n";
	cout << "   Programmed by: Dori J. Mouawad\n";
	cout << "   Student ID   : 356008\n";
	cout << "   CS1D         : TTH- 5p-9:20\n";
	cout << "   Assignment#3 : Stacks\n";
	cout << "*****************************************\n";

	int selection;
	selection = 0;

	PrintMenu(selection);

	switch(selection)
	{
		case 1: StackSTL();
			break;
		case 2:	SinglyLinkedList();
			break;
		case 3:
			break;
		case 0:
			break;
		default: cout << "Please Enter in a number between 0 and 3";
			break;
	}

}
