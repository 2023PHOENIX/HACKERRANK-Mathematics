#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int m;
    int n;
    cin >> m >> n;

    if (n <= 2 && m <= 2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << ((m / 2) + (m % 2)) * ((n / 2) + (n % 2)) << endl;
    }



}