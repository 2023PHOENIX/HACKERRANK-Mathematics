
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int location_A, location_B;
	cin >> location_A >> location_B;

	int AppleTree, OrangeTree;
	cin >> AppleTree >> OrangeTree;

	vector<int> Apple;
	vector<int> Orange;
	int n;	int m;	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int data;	cin >> data;
		Apple.push_back(data);
	}for (int i = 0; i < m; i++)
	{
		int data;	cin >> data;
		Orange.push_back(data);
	}


	int countA = 0;

	int countO = 0;
	for (int i = 0; i < Apple.size(); i++)
	{
		int AppleTreeDummy = AppleTree;
		AppleTreeDummy += Apple.at(i);

		if (AppleTreeDummy >= location_A && AppleTreeDummy <= location_B)
		{
			countA++;
		}
		
	}
	for (int i = 0; i < Orange.size(); i++)
	{
		int OrangeTreeDummy = OrangeTree;
		OrangeTreeDummy += Orange.at(i);

		if (OrangeTreeDummy >= location_A && OrangeTreeDummy <= location_B)
			countO++;

	}
	cout << countA << endl;
	cout << countO << endl;

	

	

}