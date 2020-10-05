#include<iostream>
using namespace std;


int sum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int rem = n % 10;
		n = n / 10;
		sum += rem;
	}
	return sum;

}

int main()
{
	int n;	cin >> n;
	int maximum = 0;
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			int num = sum(i);

			if (num > maximum)
			{
				maximum = num;
				count = i;
			}

			if (num == maximum)
			{
				count = min(count, i);
			}
		}
	}
	cout << count << endl;
}