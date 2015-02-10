/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "LinkedList.h"
void SinglyLinkedList()
{
	LinkedList<string> x;
	LinkedList <int> y;
	LinkedList <double> z;


	x.insertLast("Paula");
	x.insertLast("JoAnn");
	x.insertLast("Jack");
	x.insertLast("Mark");
	x.insertLast("Paul");
	x.insertLast("Eric");

	y.insertLast(2788.123);
	y.insertLast(243.76);
	y.insertLast(8445.5612);
	y.insertLast(19833.121);
	y.insertLast(12.4);

	z.insertLast(98);
	z.insertLast(88);
	z.insertLast(88);
	z.insertLast(123);
	z.insertLast(8445);
	z.insertLast(9833);
	z.insertLast(12);
	z.insertLast(354);

	cout << "B: Implement a Stack Without using STL: \n\n";
	cout << "Strings: \n";
	cout << "Size of Stack: " << x.length() << endl << endl;
	cout << "POPPING Mark\n";
	x.deleteNode("Mark");
	cout << "Size of Stack: " << x.length() << endl << endl;

	cout << "Doubles: \n";
	cout << "Size of Stack: " << y.length() << endl << endl;
	cout << "POPPING 243.76...\n";
	y.deleteNode(243.76);
	cout << "Size of Stack: " << y.length() << endl << endl;

	cout << "Integers: \n";
	cout << "Size of Stack: " << z.length() << endl << endl;
	cout << "POPPING 12...\n";
	z.deleteNode(12);
	cout << "Size of Stack: " << z.length() << endl << endl;

}
