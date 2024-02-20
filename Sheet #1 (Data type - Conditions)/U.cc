#include <iostream>
using namespace std;

int main()
{
    double N;
    long long n;

    cin >> N;

    n = N;
    N = N - n;

    if(N == 0)
        cout << "int " << n << endl;
    else
        cout << "float " << n << ' ' << N << endl;

    return 0;
}