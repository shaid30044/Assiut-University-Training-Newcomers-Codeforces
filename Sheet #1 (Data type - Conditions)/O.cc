#include <iostream>
using namespace std;

int main()
{
    long long A, B, sum;
    char S;

    cin >> A >> S >> B;

    if(S == '+')
        sum = A + B;
    else if(S == '-')
        sum = A - B;
    else if(S == '*')
        sum = A * B;
    else if(S == '/')
        sum = A / B;

    cout << sum << endl;

    return 0;
}