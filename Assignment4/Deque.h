/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/
#include "header.h"
#ifndef DEQUE_H_
#define DEQUE_H_

struct DNode
{
	int info;
	DNode *next;
	DNode *prev;
};

class Deque
{
public:
	Deque();
	int size();
	bool empty();
	void front();
	void back();
	void Push_Front(int e);
	void Push_Back(int e);
	void Pop_Front();
	void Pop_Back();

private:
	DNode *first;
	DNode *last;
	int n;
};



#endif /* DEQUE_H_ */
