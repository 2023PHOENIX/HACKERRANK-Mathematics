#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int test;    cin >> test;

    while (test--)
    {
        int n;  cin >> n;

        long long sum = 1;
        for (size_t i = 0; i < n - 1; i++)
        {
            int data; cin >> data;

            sum = sum % 1234567 * data % 1234567;//modulo property (a*b)/c = a%c * a%b
        }
        cout << sum << endl;

    }
}