/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#5 : Binary Tree
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/24/2015
 *********************************************************/

#ifndef BINARYTREE_H_
#define BINARYTREE_H_

//Node struct class
struct node
{
	node *left;
	node *right;
	char info;
};

//BINARY TREE class
class BinaryTree
{
public:
	//Default Constructor
	BinaryTree();

	//Isempty function
	bool isEmpty();

	//Insert function with char item paramater
	void insert(char item);

	//Sort function which calls the print function
	void sort();

	//Print function, which will print to the user
	void print(node *temp);

private:
	node *root;
};

#endif /* BINARYTREE_H_ */
