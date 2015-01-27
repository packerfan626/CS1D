/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#1 : Linked Lists
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 1/27/2015
 *********************************************************/

#include "header.h"

void reverseQueue(queue<char> forward, queue<char> &backward)
{
	char index;

	if(forward.size() >= 1)
	{
		index = forward.front();
		forward.pop();
		//Recursively puts the value of the forward queue, to the back
		//of the backwards queue.
		reverseQueue(forward, backward);
		backward.push(index);
	}

}
