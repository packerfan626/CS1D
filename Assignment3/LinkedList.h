/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

template <class Type>
struct node
{
	Type info;
	node *link;
};

template <class Type>
class stack
{
public:
	stack();
	void push(Type element);
	Type pop();
	bool empty() const;
	int size() const;
protected:
	node<Type> *first;
};

#endif /* LINKEDSTACK_H_ */
