/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#4 : Queue & Dequeue
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 2/17/2015
 *********************************************************/
#include "Deque.h"

void Part2()
{
	cout << "\n\nPART 2:\n\n";

	int choice = 0;
	int element = 0;
	Deque A;

	do
	{
		cout << "\n\nMake a Choice!:\n"
				"1-View Size\n"
				"2-Is the list empty?\n"
				"3-View Front of List\n"
				"4-View Back of List\n"
				"5-Push Front\n"
				"6 Push Back\n"
				"7 Pop Front\n"
				"8 Pop Back\n"
				"0 EXIT\n\n";

		cout << "Choice: ";
		cin  >> choice;

		switch(choice)
		{
			case 1: cout << "Size is : " << A.size();
				break;
			case 2: if(A.empty())
					{
						cout << "Its Empty!";
					}
					else
					{
						cout << "Not Empty!";
					}
				break;
			case 3: A.front();
				break;
			case 4: A.back();
				break;
			case 5: cout << "Type an int to Push to Front: ";
					cin  >> element;
					A.Push_Front(element);
					cout << endl;
					cout << "Size is : " << A.size();
				break;
			case 6: cout << "Type an int to Push to Back: ";
					cin  >> element;
					A.Push_Back(element);
					cout << endl;
					cout << "Size is : " << A.size();
				break;
			case 7: A.Pop_Front();
				break;
			case 8: A.Pop_Back();
				break;
			case 0: cout << "Exitting!";
				break;
		}
	}while (choice != 0);


}



