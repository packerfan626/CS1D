/*********************************************************
 *  AUTHOR       : Dori J. Mouawad
 *  Assignment#8 : Double Hash
 *  CLASS	     : CS1D
 *  SECTION      : TTH: 5:30-9:20pm
 *  Due Date     : 3/17/2015
 *********************************************************/

#ifndef HASH_H_
#define HASH_H_

using namespace std;

class Hash
{
public:
	Hash();
	void erase(int key);
	void insert(int key, string value);
	bool isFull();
	void print();

private:
	string hash[19];
	string doubleHash[19];
	int has;
	int doubleHas;

};

Hash::Hash()
{
	has = 0;
	doubleHas = 0;
}

void Hash::insert(int key, string value)
{
	int single;
	single = key % 19;

	int dub;;
	dub = 17 - (key%17);

	if (hash[single] == "")
	{
		cout << "Inserting "<< value << " into H(K)\n\n";

		hash[single] = value;

		has++;
	}
	else
	{
		if(doubleHash[dub] == "")
		{
			cout << "Inserting "<< value << " into H'(K)\n\n";

			doubleHash[dub] = value;

			doubleHas++;
		}
		else
		{
			cout << "Cannot insert " << value << " into either hash tables\n\n";
		}

	}
}

void Hash::print()
{
	cout << "H(K): \n\n";
	for (int i = 0; i < 19; i++)
	{
		if (hash[i] == "")
		{
			cout << "In #" << i << ": EMPTY" << endl;
		}
		else
		{
			cout << "In #" << i << ": "<< hash[i] << endl;
		}
	}

	cout << "\n\nH'(K): \n\n";
	for (int k = 0; k < 19; k++)
	{
		if (doubleHash[k] == "")
		{
			cout << "In #" << k << ": EMPTY" << endl;
		}
		else
		{
			cout << "In #" << k << ": "<< doubleHash[k] << endl;
		}
	}
}

void Hash::erase(int key)
{
	int single;
	single = key % 19;

	int dub;;
	dub = 17 - (key%17);

	if (hash[single] != "")
	{
		cout << "Deleting "<< hash[single] << " from H(K)\n\n";

		hash[single] = "";

		has--;
	}
	else
	{
		if(doubleHash[dub] != "")
		{
			cout << "Deleting "<< doubleHash[dub] << " from H'(K)\n\n";

			doubleHash[dub] = "";

			doubleHas--;
		}
		else
		{
			cout << "Cannot find value\n\n";
		}

	}
}




#endif /* HASH_H_ */
