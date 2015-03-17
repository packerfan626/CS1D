/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#7 : Heaps
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/10/2015
 *********************************************************/

#include "heap.h"
#include <iostream>
#include <iomanip>
using namespace std;

//Constructor for Heap
Heap::Heap()
{
	total = 0;
	root = NULL;
	back = NULL;
}

//Will return the size of the heap
int Heap::size() const
{
	return total;
}

/*Returns true if the heap is empty, returns false if the heap is not
 * empty. */
bool Heap::empty() const
{
	if (total == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Heap::insert(int element)
{
	Node *temp;
	Node *q;
	temp = new Node;
	temp->info = element;

	if (total == 0)
	{
		root = temp;
		back = temp;
		root->prev = NULL;
		back->next = NULL;
	}
	else
	{
		if (root->next == NULL)
		{
			back->next = temp;
			temp->prev = back;
			back = temp;
			back->next = NULL;
		}
		else
		{
			if (element < root->info)
			{
				root->prev = temp;
				temp->next = root;
				root = temp;
				root->prev = NULL;

			}
			else
			{
				back->next = temp;
				temp->prev = back;
				back = temp;
				back->next = NULL;
			}
		}
	}

	total++;

}

void Heap::removeMin()
{
	Node *temp;
	temp = new Node;

	if(empty())
	{
		cout << "Cannot remove from an empty list\n";
	}
	else
	{
		if(back->prev != NULL)
		{
			temp = root;
			root = root->next;

			delete temp;
		}
		else
		{
			root = NULL;
		}
		total--;
	}
}

void Heap::min()
{
	Node *temp;

	if(empty())
	{
		cout << "The Deque is Empty!";
	}
	else
	{
		temp = root;
		cout << temp->info;
	}
}

void Heap::print()
{
	int index;

	index = total;
	int count = 0;

	Node *temp;

	temp = root;

	if (root == NULL)
	{
		cout << "Empty!";
	}
	else
	{
		while (count < total)
		{
			cout << count + 1 << ": " << temp->info << endl;
			temp = temp->next;
			count++;
		}
	}
}

