/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "header.h"

void PrintMenu(int &selection)
{
	cout << "WELCOME TO THE stack PROGRAM\n\n";
	cout << "Make a selection:\n";
	cout << "1--Implement stacks using STL Vector\n";
	cout << "2--Implement a stack using a singly linked list\n";
	cout << "3--Implement a deque using a linked list\n";
	cout << "0--Exit\n";

	cout << "\nSelection: ";
	cin  >> selection;

	cout << endl << endl;
}
