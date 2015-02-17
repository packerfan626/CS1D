/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/
#include "header.h"

#ifndef QUEUE_H_
#define QUEUE_H_

typedef string Elem;
struct Node
{
	Elem info;
	Node *next;
	Node *prev;
};


class DLinkedList
{
public:
	DLinkedList();
	bool isEmpty();
	int length();
	const Elem viewFront();
	const Elem viewBack();
	void addBack(const Elem& sub);
	void eraseFront();

private:
	Node *front;
	Node *back;
	int n;
};


class LinkedDeque
{
public:
	LinkedDeque();
	int size();
	bool empty();
	void front();
	void insertBack(const Elem e);
	void removeFront();

protected:
	DLinkedList D;

};

/* LINKED DEQUE FUNCTIONS:
 * All functions for the LinkedDeque class.
 */
LinkedDeque::LinkedDeque()
{

}

int LinkedDeque::size()
{

	return D.length();
}

bool LinkedDeque::empty()
{
	if(D.isEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void LinkedDeque::front()
{
	Elem front;
	front = D.viewFront();

	cout << front;
}

void LinkedDeque::insertBack(const Elem e)
{
	D.addBack(e);
}

void LinkedDeque::removeFront()
{
	D.eraseFront();
}

/*
 * DLINKEDLIST FUNCTIONS
 */

DLinkedList::DLinkedList()
{
	front = NULL;
	back = NULL;
	n = 0;
}

bool DLinkedList::isEmpty()
{
	if (n==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int DLinkedList::length()
{
	return n;
}

const Elem DLinkedList::viewFront()
{
	Node *temp;
	Elem element;

	if (isEmpty())
	{
		cout << "The Queue is empty!\n\n";

		return 0;
	}
	else
	{
		temp = front;

		element = temp->info;

		return element;
	}
}

void DLinkedList::eraseFront()
{
	Node *temp;
	temp = new Node;

	if(isEmpty())
	{
		cout << "Cannot remove from an empty list";
	}
	else
	{
		if(front->next != NULL)
		{
			temp = front;
			front = front->next;

			delete temp;
		}
		else
		{
			front = NULL;
		}

	}
}

void DLinkedList::addBack(const Elem& newItem)
{
	Node *temp;
	temp = new Node;
	temp->info = newItem;

	if (isEmpty())
	{
		front = temp;
		back = temp;
		front->prev = NULL;
		back->next = NULL;
	}
	else
	{
		back->next = temp;
		temp->prev = back;
		back = temp;

		back->next = NULL;
	}
	n++;
}

#endif /* QUEUE_H_ */
