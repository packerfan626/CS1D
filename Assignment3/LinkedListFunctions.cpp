/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "LinkedList.h"
#include <iostream>

template <class Type>
stack<Type>::stack()
{
	first = NULL;
}

template <class Type>
void stack<Type>::push(Type element)
{
		node<Type> *newNode; //pointer to create the new node

	    newNode = new node<Type>; //create the new node
	    newNode->info = element;      //store the new item in the node
	    newNode->link = NULL;         //set the link field of new node
									  //to NULL

		if(first == NULL)  //if the list is empty, newNode is
	     			    //both the first and last node
		{
			first = newNode;
		}
}

template <class Type>
Type stack<Type>::pop()
{
	node<Type> *current = first;
	Type element = current->info;

	first = first->link;

	delete current;

	return element;
}

template <class Type>
bool stack<Type>::empty() const
{
	return first == NULL;
}

template <class Type>
int stack<Type>::size() const
{
	int count = 0;
	stack<Type> *current; //pointer to traverse the list

	current = first;

	while (current!= NULL)
	  {
	   count++;
	   current = first->link;
	}

	return count;
}

