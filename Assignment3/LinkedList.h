/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "header.h"

template <class Data>
struct listType
{
	Data info;
	listType<Data> *link;
};

template <class Data>
class LinkedList
{
public:
	LinkedList();
	const LinkedList<Data>& operator=
	          			      (const LinkedList<Data>&);
	void initializeList();
	int length();
    void destroyList();
	void insertLast(const Data& newItem);
	void deleteNode(const Data& deleteItem);
	bool isEmptyList();

protected:
	listType<Data>*first;
	listType<Data>*last;
};

template<class Data>
bool LinkedList<Data>::isEmptyList()
{
	return(first == NULL);
}

template<class Data>
LinkedList<Data>::LinkedList()
{
	first = NULL;
	last = NULL;
}

template<class Data>
void LinkedList<Data>::destroyList()
{
	listType<Data> *temp;
	while(first != NULL)
	{
	   temp = first;
	   first = first->link;
	   delete temp;
	}
	last = NULL;
}


template<class Data>
void LinkedList<Data>::deleteNode(const Data& deleteItem)
{
	listType<Data> *current;
	listType<Data> *trailCurrent;
	bool found;

	if(first == NULL)    //Case 1; list is empty.
		cout<<"Can not delete from an empty list.\n";
	else
	{
		if(first->info == deleteItem)
		{
			current = first;
			first = first ->link;
			if(first == NULL)
				last = NULL;
			delete current;
		}
		else
		{
			found = false;
			trailCurrent = first;
			current = first->link;

			while((!found) && (current != NULL))
			{
  				if(current->info != deleteItem)
				{
					trailCurrent = current;
					current = current-> link;
				}
				else
					found = true;
			}

			if(found)
			{
				trailCurrent->link = current->link;

				if(last == current)
					last = trailCurrent;
				delete current;
			}
			else
				cout<<"Item to be deleted is not in the list."<<endl;
		}
	}
}

template<class Data>
void LinkedList<Data>::insertLast(const Data& newItem)
{
	listType<Data> *newNode;

    newNode = new listType<Data>;
    newNode->info = newItem;
    newNode->link = NULL;


	if(first == NULL)

	{
		first = newNode;
		last = newNode;
	}
	else
	{
		last->link = newNode;
		last = newNode;
	}
}


template<class Data>
const LinkedList<Data>& LinkedList<Data>::operator=(
   	 	 					const LinkedList<Data>& otherList)
{
	listType<Data> *newNode;
	listType<Data> *current;

	if(this != &otherList)
	{
		if(first != NULL)
			destroyList();

		if(otherList.first == NULL)
		{
			first = NULL;
			last = NULL;
		}
		else
		{
			current = otherList.first;

				//copy the first element
			first = new listType<Data>;
   			first->info = current->info;
   			first->link = NULL;
			last = first;
			current = current->link;

			while(current != NULL)
			{
				newNode = new listType<Data>;
				newNode->info = current->info;
				newNode->link = NULL;
				last->link = newNode;
				last = newNode;
				current = current->link;
			}
		}
	}

   return *this;
}

template<class Data>
int LinkedList<Data>::length()
{
	int count = 0;
	listType<Data> *current;

	current = first;

	while (current!= NULL)
      {
	   count++;
	   current = current->link;
	}

 	return count;
}



#endif /* LINKEDLIST_H_ */
