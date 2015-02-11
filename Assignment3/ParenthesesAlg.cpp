/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#3 : Stacks
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/10/2015
 *********************************************************/
#include "header.h"
#include "Parenthesis.h"
void Parentheses()
{
	string equation;
	bool match = false;


	//Taking input from a user
	cin.ignore();
	cout << "Enter in an equation: ";
	getline(cin, equation);


	cout << endl;

	match = ParenthesesAlgorithm(equation);

	if (match == true)
	{
		cout << "VALID!\n\n";
	}
	else
	{
		cout << "NOT valid\n\n";
	}
}

bool ParenthesesAlgorithm(string equation)
{
	//Initializing Variables
	int i;					//Counter
	int max;				//To be used to get max size of string

	char charVar[100];

	//Setting them to 0
	max = 0;

	//Initializing the stack
	paren<char> initial;


	max = equation.length();

	//Converts string into characters
	strcpy(charVar, equation.c_str());

	//Parenthesis Algorithm
	for (i = 0; i < max; i++)
	{
		if (charVar[i] == '(' || charVar[i] == '{' || charVar[i] == '[')
		{
			initial.push(charVar[i]);
		}
		else if (charVar[i] == ')')
		{
			if(initial.top() == '(' )
			{
				initial.pop();
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (charVar[i] == '}')
		{
			if(initial.top() == '{' )
			{
				initial.pop();
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (charVar[i] == ']')
		{
			if(initial.top() == '[' )
			{
				initial.pop();
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

