/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "LinkedDeque.h"
#include <iostream>

template <class Data>
LinkedDeque<Data>::LinkedDeque()
{
	first = NULL;
	last = NULL;
}

template <class Data>
int LinkedDeque<Data>::size() const
{
	int count = 0;
	dequeType<Data> *first; //pointer to traverse the list

	while (first!= NULL)
	  {
	   count++;
	   first = first->link;
	}

	return count;
}



