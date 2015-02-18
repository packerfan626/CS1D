/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/

#include "Deque.h"

Deque::Deque()
{
	first = NULL;
	last = NULL;
	n = 0;
}

int Deque::size()
{
	return n;
}

bool Deque::empty()
{
	if (n == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Deque::front()
{
	DNode *temp;

	if(empty())
	{
		cout << "The Deque is Empty!";
	}
	else
	{
		temp = first;
		cout << "First: " << temp->info;
	}
}

void Deque::back()
{
	DNode *temp;

	if(empty())
	{
		cout << "The Deque is Empty!";
	}
	else
	{
		temp = last;
		cout << "Last: " << temp->info;
	}
}

void Deque::Push_Front(int element)
{
	DNode *temp;
	temp = new DNode;
	temp->info = element;

	if(empty())
	{
		first = temp;
		last = temp;
		first->prev = NULL;
		last->next = NULL;
	}
	else
	{
		first->prev = temp;
		temp->next = first;
		first = temp;
		first->prev = NULL;
	}

	n++;
}

void Deque::Push_Back(int element)
{
	DNode *temp;
	temp = new DNode;

	temp->info = element;

	if(empty())
	{
		first = temp;
		last = temp;
		first->prev = NULL;
		last->next = NULL;
	}
	else
	{
		last->next = temp;
		temp->prev = last;
		last = temp;
		last->next = NULL;
	}

	n++;
}


void Deque::Pop_Front()
{
	DNode *temp;
	temp = new DNode;

	if(empty())
	{
		cout << "Cannot remove from an empty list\n";
	}
	else
	{
		if(last->prev != NULL)
		{
			temp = first;
			first = first->next;

			delete temp;
		}
		else
		{
			first = NULL;
		}
		n--;
	}
}

void Deque::Pop_Back()
{
	DNode *temp;
	temp = new DNode;

	if(empty())
	{
		cout << "Cannot remove from an empty list\n";
	}
	else
	{
		if(last->prev != NULL)
		{
			temp = last;
			last = last->prev;

			delete temp;
		}
		else
		{
			last = NULL;
		}

		n--;
	}
}


