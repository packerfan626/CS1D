/********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/

#ifndef LINKEDDEQUE_H_
#define LINKEDDEQUE_H_

#include "header.h"

template <class Data>
struct dequeType
{
	Data info;
	dequeType<Data> *link;
};

template <class Data>
class LinkedDeque
{
public:
	LinkedDeque();
	int size() const;
	bool empty() const;
	void insertFront(const Data& newItem);
	void insertBack(const Data& newItem);
	void removeFront(const Data& deleteItem);
	void removeBack(const Data& deleteItem);

protected:
	dequeType<Data> *first;
	dequeType<Data> *last;
};


#endif /* LINKEDDEQUE_H_ */
