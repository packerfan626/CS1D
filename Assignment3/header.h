/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <stack>

//Print Menu function, display main menu to the user
void PrintMenu(int &selection);

//Function that will implement a stack using the STL Vector
void StackSTL();

//Function that will implement a stack using a singly linked list
void SinglyLinkedList();

//Function that will implement a deque using a linked list
void DequeLinkedList();

using namespace std;


#endif /* HEADER_H_ */
