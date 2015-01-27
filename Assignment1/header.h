/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#1 : Linked Lists
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 1/27/2015
 *********************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stdio.h>

using namespace std;

//isPalindrome Function
bool isPalindrome (queue<char> q, bool &palindrome);

//Initialize Queue Function
void initializeQueue(string stringVar);

//ReverseQueue Function
void reverseQueue(queue<char> forward, queue<char> &backward);

#endif /* HEADER_H_ */
