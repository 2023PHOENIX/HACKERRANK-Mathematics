#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int b;    cin >> b;
    int A;    cin >> A;

    int H = (A * 2 + (b - 1)) / b;

    cout << H << endl;
}