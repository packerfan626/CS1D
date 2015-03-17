/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#5 : Binary Tree
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/24/2015
 *********************************************************/
#include "header.h"

//Constructor
BinaryTree::BinaryTree()
{
	root = NULL;
}

//Checks if the tree is empty, using the root function
bool BinaryTree::isEmpty()
{
	if(root == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}

//Insert function; will add the value to the binary
void BinaryTree::insert(char item)
{
	node *temp=new node;
	node *parent;


	temp->info = item;
	temp->left = NULL;
	temp->right = NULL;
	parent = NULL;

	if(isEmpty())
	{
		root = temp;
	}
	else
	{
		node *ptr;
		ptr = root;
		while(ptr != NULL)
		{
			parent = ptr;
			if(item > ptr->info)
			{
				ptr = ptr->right;
			}
			else
			{
				ptr = ptr->left;
			}
		}
		if(item < parent->info)
		{
			parent->left = temp;
		}
		else
		{
			parent->right = temp;
		}
	}
}

//Sort function, calls the print function
void BinaryTree::sort()
{
	cout << "Tree Order from Root to last one: ";
	print(root);
}

/*Print function, called by the
 * sort function
 */
void BinaryTree::print(node *temp)
{

	if(temp != NULL)
	{
		print(temp->left);
		cout << temp->info << " ";
		print(temp->right);
	}
}
