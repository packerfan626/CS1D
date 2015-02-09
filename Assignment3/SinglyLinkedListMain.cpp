/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "header.h"

void SinglyLinkedList()
{
	stack<string> x;
	stack <int> y;
	stack <double> z;

	x.push("Paula");
	x.push("JoAnn");
	x.push("Jack");
	x.push("Mark");
	x.push("Paul");
	x.push("Eric");

	y.push(2788.123);
	y.push(243.76);
	y.push(8445.5612);
	y.push(19833.121);
	y.push(12.4);

	z.push(98);
	z.push(88);
	z.push(88);
	z.push(123);
	z.push(8445);
	z.push(9833);
	z.push(12);
	z.push(354);

	cout << "B: Implement a Stack Without using STL: \n\n";
	cout << "Strings: \n";
	cout << "Last Element: " << x.top() << endl;
	cout << "Size of Stack: " << x.size() << endl << endl;
	cout << "POPPING last element...\n";
	x.pop();
	cout << "Last Element: " << x.top() << endl;
	cout << "Size of Stack: " << x.size() << endl << endl;

	cout << "Doubles: \n";
	cout << "Last Element: " << y.top() << endl;
	cout << "Size of Stack: " << y.size() << endl << endl;
	cout << "POPPING last element...\n";
	y.pop();
	cout << "Last Element: " << y.top() << endl;
	cout << "Size of Stack: " << y.size() << endl << endl;

	cout << "Integers: \n";
	cout << "Last Element: " << z.top() << endl;
	cout << "Size of Stack: " << z.size() << endl << endl;
	cout << "POPPING last element...\n";
	z.pop();
	cout << "Last Element: " << z.top() << endl;
	cout << "Size of Stack: " << z.size() << endl << endl;

}
