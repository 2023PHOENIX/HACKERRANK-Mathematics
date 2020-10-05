#include<iostream>
using namespace std;

void HandShake()
{
	long long n;	cin >> n;
	long long sum = 0;
	for (int i = 1; i < n; i++)
		sum += i;

	cout << sum << endl;
}
int main()
{
	int test;	cin >> test;
	while (test--)
	{
		HandShake();
	}
}