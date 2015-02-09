/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

#include "header.h"

template <class Data>
class LinkedList
{
public:
	LinkedList();
	int size() const;			//Number of items in Stack
	void push(const Data& newItem);	//Pushes elements into stack
	void pop(Data& poppedItem);	//Pops elements
	bool isEmpty();				//Checks if its empty

private:

	LinkedList<Data> x, y, z;
	int n;					//Keeps track of the number of elements
};



#endif /* LINKEDSTACK_H_ */
