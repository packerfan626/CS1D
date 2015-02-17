/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/

#include "Queue.h"

void Part1()
{
	string string1 = "A man, a plan, a canal, Panama";
	string string2 = "Was it a car or a cat I saw?";
	string string3 = "Sit on a potato pan, Otis";
	string string4 = "Isn’t this class cool?";

	LinkedDeque A;

	cout << "PART 1: \n";
	cout << "Size: " << A.size() << endl;
	cout << "NOW INSERTING ALL STRINGS:\n\n";

	A.insertBack(string1);
	A.insertBack(string2);
	A.insertBack(string3);
	A.insertBack(string4);

	cout << "Size: " << A.size() << endl;
	cout << "Front: ";
	A.front();

	cout << "\n\nREMOVING first string: ";
	A.removeFront();

	cout << "Size: " << A.size() << endl;
	cout << "Front: ";
	A.front();

}

