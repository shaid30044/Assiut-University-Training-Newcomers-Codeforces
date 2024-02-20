#include <iostream>
using namespace std;

int main()
{
    long long A, B, big, small;

    cin >> A >> B;

    big = A;
    small = B;

    if (big < B)
    {
        big = B;
        small = A;
    }

    if (big % small == 0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples" << endl;

    return 0;
}