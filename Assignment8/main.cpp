/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#8 : Double Hash
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/17/2015
 *********************************************************/

#include "header.h"
#include "hash.h"
int main()
{
	//PRINT HEADING to user
	cout << "*****************************************\n";
	cout << "   Programmed by: Dori J. Mouawad\n";
	cout << "   Student ID   : 356008\n";
	cout << "   CS1D         : T-TH 5p-9:20\n";
	cout << "   Assignment#8 : Double Hashing \n";
	cout << "*****************************************\n";

	Hash table;

	table.insert(18, "Laguna Niguel");
	table.insert(41, "Mission Viejo");
	table.insert(22, "Lake Forest");
	table.insert(44, "Irvine");
	table.erase(18);

	table.insert(59, "San Clemente");
	table.insert(32, "San Diego");
	table.insert(49, "Anaheim");
	table.erase(22);

	table.insert(73, "Los Angeles");
	table.insert(17, "Orange");
	table.insert(77, "Palm Springs");
	table.insert(26, "Riverside");
	table.erase(49);

	table.insert(19, "Brea");
	table.insert(60, "Santa Ana");
	table.insert(35, "Tustin");
	table.insert(52, "Oceanside");
	table.insert(11, "La Jolla");
	table.insert(18, "Del Mar");
	table.insert(22, "Aliso Viejo");
	table.insert(49, "Laguna Beach");

	table.print();
}


