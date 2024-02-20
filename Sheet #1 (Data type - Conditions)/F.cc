#include <iostream>
using namespace std;

int main()
{
    long long N, M, last_digit_of_N, last_digit_of_M;

    cin >> N >> M;

    last_digit_of_N = N % 10;
    last_digit_of_M = M % 10;

    cout << last_digit_of_N + last_digit_of_M << endl;

    return 0;
}