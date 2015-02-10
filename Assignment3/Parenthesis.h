/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/

#ifndef PARENTHESIS_H_
#define PARENTHESIS_H_

#include <iostream>
#include <iomanip>

template <class Data>
struct list
{
	Data info;
	list *link;
};

template <class Data>
class paren
{
public:
	paren();
	void push(Data newItem);
	Data pop(Data item);
	bool isEmpty();
	int size();

protected:
	list<Data> *first;
	list<Data> *last;
	Data *Element;
	int n;
};

template <class Data>
paren<Data>::paren()
{
	first = NULL;
	last = NULL;
	n = 0;
}

template <class Data>
void paren<Data>::push(Data newItem)
{
	list<Data> *newNode; //pointer to create the new node

    newNode = new list<Data>; //create the new node
    newNode->info = newItem;      //store the new item in the node
    newNode->link = NULL;         //set the link field of new node
								  //to NULL

	if(first == NULL)  //if the list is empty, newNode is
     			    //both the first and last node
	{
		first = newNode;
	}
	else
	{
		last = newNode;
	}

	n++;
}

template<class Data>
Data paren<Data>::pop(Data item)
{

	if (isEmpty() == true)
	{
		cout << "Can't pop from an empty stack";
	}
	else
	{
		delete first;
	}
	n--;
	return item;
}

template <class Data>
bool paren<Data>::isEmpty()
{
	bool isEmpty = false;

	if (n == 0)
	{
		isEmpty = true;
	}
	else if (n > 0)
	{
		isEmpty = false;
	}
	return isEmpty;
}

template <class Data>
int paren<Data>::size()
{
	return n;
}


#endif /* PARENTHESIS_H_ */
