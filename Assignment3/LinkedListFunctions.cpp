/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "LinkedList.h"

template <class Data>
LinkedList<Data>::LinkedList()
{
	n = 0;
}

template <class Data>
int LinkedList<Data>::size() const
{
	return n;
}


template <class Data>
void LinkedList<Data>::push(const Data& newItem)
{

}

template <class Data>
void LinkedList<Data>::pop(Data& poppedItem)
{

}

template <class Data>
bool LinkedList<Data>::isEmpty()
{
	bool empty;
	if (n == 0)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}

	return empty;
}
