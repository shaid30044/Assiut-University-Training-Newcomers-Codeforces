#include <iostream>
using namespace std;

int main()
{
    long long N, sum = 0;

    cin >> N;

    sum = N * (N + 1) / 2;

    cout << sum << endl;

    return 0;
}