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
	string doubleHash[100];
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
	int single = 0;
	single = key % 19;

	int dub = 0;
	dub = 17 - (key%17);

	if (hash[single] == "")
	{
		cout << "Inserting "<< value << " into H(K) at #" << single << endl << endl;

		hash[single] = value;
		doubleHash[key] = value;

		has++;
	}
	else
	{
		if(hash[dub] == "")
		{
			cout << "Double Hashing:  "<< value << "into H(K) at #" << dub << endl << endl;

			hash[dub] = value;
			doubleHash[key] = value;

			has++;
		}
		else
		{
			while (hash[dub] != "")
			{
				dub++;

				if(dub == 19)
				{
					dub = 0;
				}
			}

			if(hash[dub] == "")
			{
				cout << "Double Hashing: "<< value << "\n\n";
				hash[dub] = value;
				doubleHash[key] = value;
			}
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

}

void Hash::erase(int key)
{
	int single;
	single = key % 19;

	int dub;
	dub = 17 - (key%17);

	if (hash[single] != "" && hash[single] == doubleHash[key])
	{
		cout << "Deleting "<< hash[single] << " from H(K)\n\n";

		hash[single] = "";

		has--;
	}
	else if (hash[single] == "" || hash[single] != doubleHash[key])
	{
		int i = 0;
		string value;

		value = doubleHash[key];
		while(hash[i] != value)
		{
			i++;
		}

		if(hash[i] == value)
		{
			cout << "Deleting "<< hash[i] << " from H(K)\n\n";
			hash[i] = "";
		}
	}
	else
	{
		cout << "Cannot find value\n\n";
	}

}




#endif /* HASH_H_ */
