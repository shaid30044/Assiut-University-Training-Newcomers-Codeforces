#include <iostream>
using namespace std;

int main()
{
    int X, first_digit;

    cin >> X;

    first_digit = X / 1000;

    if(first_digit % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}