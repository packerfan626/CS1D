/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#1 : Linked Lists
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 1/27/2015
 *********************************************************/

#include "header.h"

bool isPalindrome (queue<char> q, bool &palindrome)
{
	//Declares queue<char> d, to be used as the reverse function.
	queue<char> d;

	//Calls reverse Queue function
	reverseQueue(q, d);

	//Checks if the values are equal in the queue and the reverse queue
	if(q.front() == d.front())
	{
		while (q.front() == d.front() && q.size() > 0)
		{
			q.pop();
			d.pop();

			if(q.size() == 0)
			{
				palindrome = true;
			}
			else
			{
				palindrome = false;
			}
		}
	}
	else
	{
		palindrome = false;
	}

	return palindrome;
}




