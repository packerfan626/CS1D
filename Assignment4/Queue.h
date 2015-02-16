/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/

#ifndef QUEUE_H_
#define QUEUE_H_
template<class Data>
struct Node
{
	Data info;
	Node *next;
	Node *prev;
};


template<class Data>
class DLinkedList
{
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const Data viewFront() const;
	const Data viewBack() const;
	void addFront(const Data& add);
	void addBack(const Data& sub);
	void removeFront();
	void removeBack();

protected:
	Node <Data> *front;
	Node <Data> *back;
	int n;
};


template<class Data>
class LinkedDeque
{
public:
	LinkedDeque();
	int size() const;
	bool empty() const;
	const Data front();
	const Data back();

private:
	void removeFront();
	void removeBack();
	DLinkedList<Data> D;
};



#endif /* QUEUE_H_ */
