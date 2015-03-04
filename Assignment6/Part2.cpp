#include "header.h"
#include <queue>


struct patient
{
	string name;
	float priority;
};

class lessThan
{
public:
	bool operator()(patient a, patient b)
	{
		if(a.priority < b.priority)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


void Part2()
{
	priority_queue <patient, vector<patient>, lessThan> pq;

	patient erPatients[9] = {{"Irene Ill", 1}, {"Bob Bleeding", 2} ,{"Alice Ailment", 3},
			{"Sid Sickly", 4}, {"Cathy Coughing", 5},  {"Sam Sneezing", 5}, {"Tom Temperature", 5.5},
			{"Paula Pain", 5.6}, {"Frank Feelingbad", 7}};

	pq.push(erPatients[0]);
	pq.push(erPatients[1]);
	pq.push(erPatients[2]);
	pq.push(erPatients[3]);
	pq.push(erPatients[4]);
	pq.push(erPatients[5]);
	pq.push(erPatients[6]);
	pq.push(erPatients[7]);
	pq.push(erPatients[8]);

	cout << "First to last: \n\n";

	for(int i = 0; i < 9; i ++)
	{
		cout << i + 1 << ". Name: " << pq.top().name << endl;
		pq.pop();
	}
}

