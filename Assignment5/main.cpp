/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#5 : Binary Tree
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/24/2015
 *********************************************************/
#include "header.h"

int main()
{
	//PRINT HEADING
	cout << "*****************************************\n";
	cout << "   Programmed by: Dori J. Mouawad\n";
	cout << "   Student ID   : 356008\n";
	cout << "   CS1D         : TTH- 5p-9:20\n";
	cout << "   Assignment#5 : Binary Tree \n";
	cout << "*****************************************\n";

	//Variables
	BinaryTree tree;
	int i = 0;
	char value;

	//Runs loop to take in 7 inputs
	while (i < 7)
	{
		/*If the tree is empty, it will add the first value to the
		 * root value.
		 */

		if (tree.isEmpty())
		{
			//input--value from user
			cout << "Enter a value for the root: ";
			cin.get(value);
			tree.insert(value);
			cin.ignore();
		}
		//If the tree is NOT empty, it will add the value to the tree
		else
		{
			//input--value from user
			cout << "Enter in a value for the tree: ";
			cin.get(value);
			tree.insert(value);
			cin.ignore();
		}

		//counter
		i++;
	}

	//Calls the sort function; which calls the print function
	tree.sort();


	return 0;
}

