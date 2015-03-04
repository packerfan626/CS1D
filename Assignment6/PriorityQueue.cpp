#include "PriorityQueue.h"

void Part1()
{
	PriorityQueue h;

	cout << "Ascending Order: \n\n";
	h.insert("Frank Feelingbad", 7.0);
	h.insert("Paula Pain", 5.6);
	h.insert("Tom Temperature", 5.5);
	h.insert("Sam Sneezing", 5.1);
	h.insert("Cathy Couging", 5.0);
	h.insert("Sid Sickly", 4.0);
	h.insert("Alice Ailment", 3.0);
	h.insert("Bob Bleeding", 2.0);
	h.insert("Irene Ill", 1.0);


	h.print();

}
