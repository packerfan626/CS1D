#include "header.h"

void StackSTL()
{
	stack <string> x;			//Implement a stack with strings
	stack <double> y;			//Implement a stack of doubles
	stack <int> z;				//Implement a stack of ints

	//Inserting all string values into the String stack
	x.push("Paula");
	x.push("JoAnn");
	x.push("Jack");
	x.push("Mark");
	x.push("Paul");
	x.push("Eric");

	//Inserting all double values into the Double stack
	y.push(2788.123);
	y.push(243.76);
	y.push(8445.5612);
	y.push(19833.121);
	y.push(12.4);

	//Inserting all int values into the Integer stack
	z.push(98);
	z.push(88);
	z.push(88);
	z.push(123);
	z.push(8445);
	z.push(9833);
	z.push(12);
	z.push(354);

	cout << "A: STL vector: \n\n";

	cout << "String Stack: \n";
	cout << "Size of String stack " << x.size() << endl;
	cout << "Last Item in String Stack " << x.top() << endl << endl;

	cout << "Double Stack: \n";
	cout << "Size of Double stack " << y.size() << endl;
	cout << "Last item in Double Stack " << y.top() << endl << endl;

	cout << "Integer Stack: \n";
	cout << "Size of Integer Stack: " << z.size() << endl;
	cout << "Last item in Integer Stack: " << z.top() << endl << endl;
}
