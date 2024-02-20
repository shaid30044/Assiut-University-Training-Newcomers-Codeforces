#include <iostream>
using namespace std;

int main()
{
    char X, capital, small;

    cin >> X;

    if (X >= 'A' && X <= 'Z')
    {
        small = X + 32;
        cout << small << endl;
    }
    else if (X >= 'a' && X <= 'z')
    {
        capital = X - 32;
        cout << capital << endl;
    }

    return 0;
}