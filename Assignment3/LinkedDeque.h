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
struct deq
{
	Data info;
	deq *next;
	deq *prev;
};

template <class Data>
class Double
{
public:
	Double();
	int size() const;
	bool empty() const;
	void insertFront(const Data newItem);
	void insertBack(const Data newItem);
	void removeFront();
	void removeBack();
	Data top() const;
	Data bottom() const;

protected:
	deq <Data> *front;
	deq <Data> *back;
	int n;
};

template <class Data>
Double<Data>::Double()
{
	front = NULL;
	back = NULL;
	n = 0;
}


template <class Data>
int Double<Data>::size() const
{
	int size;

	if (front == NULL)
	{
		size = 0;
	}
	else
	{
		size = n;
	}

	return size;
}

template <class Data>
void Double<Data>::insertFront(const Data newItem)
{
	deq<Data> *temp;
	temp = new deq<Data>;
	temp->info = newItem;
	if (empty())
	{
		front = temp;
		back = temp;
		front->prev = NULL;
		back->next = NULL;
	}
	else
	{
		front->prev = temp;
		temp->next = front;
		front = temp;
		front->prev = NULL;
	}

	n++;
}

template <class Data>
void Double<Data>::insertBack(const Data newItem)
{
	deq<Data>*temp;
	temp = new deq<Data>;
	temp->info = newItem;

	if (empty())
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

template <class Data>
void Double<Data>::removeFront()
{
	deq<Data> *temp;
	temp = new deq<Data>;
	temp->info;

	if(empty())
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

template <class Data>
void Double<Data>::removeBack()
{
	deq<Data> *temp;
	temp = new deq<Data>;
	temp->info;

	if(empty())
	{
		cout << "Cannot remove from an empty list";
	}
	else
	{
		if(back->prev != NULL)
		{
			temp = back;
			back = back->prev;

			delete temp;
		}
		else
		{
			back = NULL;
		}

	}
}

template <class Data>
bool Double<Data>::empty() const
{
	bool empty = false;
	if (size() == 0)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}
	return empty;
}

template <class Data>
Data Double<Data>::top() const
{
	deq<Data> *temp;

	temp = front;
	return temp->info;
}

template <class Data>
Data Double<Data>::bottom() const
{
	deq<Data> *temp;

	temp = back;
	return temp->info;
}

#endif /* LINKEDDEQUE_H_ */
