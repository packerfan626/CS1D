///*********************************************************
// *  AUTHOR       : Dori J. Mouawad
// *  Assignment#3 : Stacks
// *  CLASS	     : CS1D
// *  SECTION      : TTH: 5:30-9:20pm
// *  Due Date     : 2/10/2015
// *********************************************************/
#include "LinkedDeque.h"
void DequeLinkedList()
{
	Double <string> x;
	Double <int> y;
	Double <double> z;

	x.insertFront("Paula");
	x.insertBack("JoAnn");
	x.insertBack("Jack");
	x.insertBack("Mark");
	x.insertBack("Paul");
	x.insertBack("Eric");

	y.insertFront(2788.123);
	y.insertBack(243.76);
	y.insertBack(8445.5612);
	y.insertBack(19833.121);
	y.insertBack(12.4);

	z.insertFront(98);
	z.insertBack(88);
	z.insertBack(88);
	z.insertBack(123);
	z.insertBack(8445);
	z.insertBack(9833);
	z.insertBack(12);
	z.insertBack(354);

	cout << "STRINGS:\n";
	cout << "First: " << x.top() << endl;
	cout << "Last: " << x.bottom();
	cout << "\nSize: " << x.size();
	cout << "\nREMOVING..Eric";
	x.removeBack();
	cout << "\nLast: " << x.bottom() << endl << endl;

	cout << "DOUBLES:\n";
	cout << "First: " << y.top() << endl;
	cout << "Last: " << y.bottom();
	cout << "\nSize: " << y.size();
	cout << "\nREMOVING..12.4";
	y.removeBack();
	cout << "\nLast: " << y.bottom() << endl << endl;

	cout << "INTS:\n";
	cout << "First: " << z.top() << endl;
	cout << "Last: " << z.bottom();
	cout << "\nSize: " << z.size();
	cout << "\nREMOVING..354";
	z.removeBack();
	cout << "\nLast: " << z.bottom() << endl << endl;
}
