/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#6 : Priority Queue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/2/2015
 *********************************************************/

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

#include "header.h"
struct Node
{
	struct Node *next;
	string info;
	float priority;
};

class PriorityQueue
{
public:
	PriorityQueue();
	int size () const;
	bool isEmpty() const;
	void insert (string element, float prio);
	void print();
	void top();
private:
	int total;
	Node *front;
};

PriorityQueue::PriorityQueue()
{
	total = 0;
	front = NULL;
}

int PriorityQueue::size() const
{
	return total;
}

bool PriorityQueue::isEmpty() const
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

void PriorityQueue::insert(string element, float prio)
{
	Node *temp;
	Node *q;
	temp = new Node;
	temp->info = element;
	temp->priority = prio;

	if (front == NULL || prio < front->priority)
	{
		temp->next = front;
		front = temp;
	}
	else
	{
		q = front;

		while(q->next != NULL && q->next->priority <= prio)
		{
			q = q->next;
			temp->next = q->next;
			q->next = temp;
		}
	}

	total++;
}

void PriorityQueue::print()
{
	int index;

	index = total;

	Node *temp;

	temp = front;

	if (front == NULL)
	{
		cout << "Empty!";
	}
	else
	{
		while (index > 0 && temp)
		{
			cout << index << ": " << temp->info << endl;
			temp = temp->next;
			index--;
		}
	}

}

#endif /* PRIORITYQUEUE_H_ */
