/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#7 : Heaps
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/10/2015
 *********************************************************/

#ifndef HEAP_H_
#define HEAP_H_

//Struct with values for Node
struct Node
{
	Node *next;
	Node *prev;
	int info;
};

/*CLASS: lessThan; comparator, used to make sure the minimum is always
 * at the root. */
class lessThan
{
public:
	bool operator()(Node a, Node b)
	{
		if(a.info < b.info)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};



/*CLASS: Heap
 * Functions: Size, empty, insert, min, and remove min.*/
class Heap
{
public:
	Heap();
	int size() const;			//Number of elements
	bool empty() const;			//Checks if the heap is empty
	void insert(int element);	//Inserts an element into a heap
	void min();					//returns the minimum element
	void removeMin();			//removes the minimum value
	void print();

private:
	Node *root;
	Node *back;
	int total;
	lessThan comparator;
};




#endif /* HEAP_H_ */
