#include <iostream>
using namespace std;

int main()
{
    long long N, y, m, d;

    cin >> N;

    y = N / 365;

    N %= 365;
    m = N / 30;

    N %= 30;
    d = N;

    cout << y << " years" << endl
         << m << " months" << endl
         << d << " days" << endl;

    return 0;
}