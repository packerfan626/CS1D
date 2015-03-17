/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#7 : Heaps
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/10/2015
 *********************************************************/
#include "header.h"

int main()
{
	//PRINT HEADING to user
	cout << "*****************************************\n";
	cout << "   Programmed by: Dori J. Mouawad\n";
	cout << "   Student ID   : 356008\n";
	cout << "   CS1D         : T-TH 5p-9:20\n";
	cout << "   Assignment#7 : Heaps \n";
	cout << "*****************************************\n";

	Heap value;
	int i;

	cout << "INSERTING VALUES: " << endl << endl;
	value.insert(67);
	value.insert(88);
	value.insert(77);
	value.insert(52);
	value.insert(44);
	value.insert(11);
	value.insert(66);
	value.insert(93);

	value.print();

	cout << "Removing ALL Values: " << endl << endl;
	for (i = 0; i < 7; i++)
	{
		value.removeMin();
	}

	cout << "Last Value: ";
	value.min();
}

