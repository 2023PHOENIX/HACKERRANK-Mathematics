#include<iostream>

using namespace std;

int main()
{
    int jars, test;

    cin >> jars >> test;
    long long result = 0;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        long long num; cin >> num;
        long long K = m - n + 1;

        result += K * num;


    }

    cout << result / jars << endl;
}