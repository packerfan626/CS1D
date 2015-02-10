/*
 * LinkedList.h
 *
 *  Created on: Feb 10, 2015
 *      Author: Dori
 */

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
	void print();
	int length();
    void destroyList();
	void reverseNode();
	void insertLast(const Data& newItem);
	void insertMid(const Data& newItem);
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
LinkedList<Data>::LinkedList() // default constructor
{
	first = NULL;
	last = NULL;
}

template<class Data>
void LinkedList<Data>::destroyList()
{
	listType<Data> *temp;   //pointer to deallocate the memory
							//occupied by the node
	while(first != NULL)    //while there are nodes in the list
	{
	   temp = first;        //set temp to the current node
	   first = first->link; //advance first to the next node
	   delete temp;         //deallocate memory occupied by temp
	}
	last = NULL;    //initialize last to NULL; first has already
                   //been set to NULL by the while loop
}

template<class Data>
void LinkedList<Data>::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}

template<class Data>
void LinkedList<Data>::print()
{
	listType<Data> *current; //pointer to traverse the list

	current = first;   //set current so that it points to
					   //the first node
	while(current != NULL) //while more data to print
	{
	   cout<< fixed << setprecision(1) << current->info <<" ";
	   current = current->link;
	}
}

template<class Data>
void LinkedList<Data>::deleteNode(const Data& deleteItem)
{
	listType<Data> *current; //pointer to traverse the list
	listType<Data> *trailCurrent; //pointer just before current
	bool found;

	if(first == NULL)    //Case 1; list is empty.
		cout<<"Can not delete from an empty list.\n";
	else
	{
		if(first->info == deleteItem) //Case 2
		{
			current = first;
			first = first ->link;
			if(first == NULL)    //list had only one node
				last = NULL;
			delete current;
		}
		else  //search the list for the node with the given info
		{
			found = false;
			trailCurrent = first;   //set trailCurrent to point to
									//the first node
			current = first->link;	//set current to point to the
    								//second node

			while((!found) && (current != NULL))
			{
  				if(current->info != deleteItem)
				{
					trailCurrent = current;
					current = current-> link;
				}
				else
					found = true;
			} // end while

			if(found) //Case 3; if found, delete the node
			{
				trailCurrent->link = current->link;

				if(last == current)			//node to be deleted was
											//the last node
					last = trailCurrent;	//update the value of last
				delete current;				//delete the node from the list
			}
			else
				cout<<"Item to be deleted is not in the list."<<endl;
		} //end else
	} //end else
} //end deleteNode

template<class Data>
void LinkedList<Data>::insertLast(const Data& newItem)
{
	listType<Data> *newNode; //pointer to create the new node

    newNode = new listType<Data>; //create the new node
    newNode->info = newItem;      //store the new item in the node
    newNode->link = NULL;         //set the link field of new node
								  //to NULL

	if(first == NULL)  //if the list is empty, newNode is
     			    //both the first and last node
	{
		first = newNode;
		last = newNode;
	}
	else     //if the list is not empty, insert newNnode after last
	{
		last->link = newNode; //insert newNode after last
		last = newNode; //make last point to the actual last node
	}
}//end insertLast

template<class Data>
void LinkedList<Data>::insertMid(const Data& newItem)
{
		listType<Data> *newNode; //pointer to create the new node
	    newNode = new listType<Data>; //create the new node

	    listType<Data> *current;
	    current = first;

	    int middle;

	    newNode->info = newItem;      //store the new item in the node
	    newNode->link = NULL;         //set the link field of new node
									  //to NULL

	    middle = length()/2;

	    for (int i = 1; i < middle; i++)
	    {
	    	current = current->link;
	    }

	    newNode->link = current->link;
		current->link = newNode;
}

template<class Data>
void LinkedList<Data>::reverseNode()
{
	listType<Data> *firstVal = first;
	listType<Data> *secondVal = first->link;
	listType<Data> *temp = NULL;

	if (secondVal->link != NULL)
	{
		temp = secondVal->link;
	}
	first->link = NULL;
	while (temp->link != NULL)
	{
		secondVal->link = firstVal;
		firstVal = secondVal;
		secondVal = temp;
		temp = temp->link;
	}
	secondVal->link = firstVal;
	first = temp;
	temp->link = secondVal;
}


template<class Data>
const LinkedList<Data>& LinkedList<Data>::operator=(
   	 	 					const LinkedList<Data>& otherList)
{
	listType<Data> *newNode; //pointer to create a node
	listType<Data> *current; //pointer to traverse the list.

	if(this != &otherList) //avoid self-copy
	{
		if(first != NULL)  //if the list is not empty, destroy the list
			destroyList();

		if(otherList.first == NULL) //otherList is empty
		{
			first = NULL;
			last = NULL;
		}
		else
		{
			current = otherList.first;	//current points to the
										//list to be copied

				//copy the first element
			first = new listType<Data>;		//create the node
   			first->info = current->info;	//copy the info
   			first->link = NULL;  			//set the link field of
											//the node to NULL
			last = first;            //make last point to the first node
			current = current->link; //make current point to the next
  		  							 //node of the list being copied

				//copy the remaining list
			while(current != NULL)
			{
				newNode = new listType<Data>;
				newNode->info = current->info;
				newNode->link = NULL;
				last->link = newNode;
				last = newNode;
				current = current->link;
			}//end while
		}//end else
	}//end else

   return *this;
}

template<class Data>
int LinkedList<Data>::length()
{
	int count = 0;
	listType<Data> *current; //pointer to traverse the list

	current = first;

	while (current!= NULL)
      {
	   count++;
	   current = current->link;
	}

 	return count;
}  // end length



#endif /* LINKEDLIST_H_ */
