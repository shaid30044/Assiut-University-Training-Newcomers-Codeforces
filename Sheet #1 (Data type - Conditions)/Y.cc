#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D, last_two_digits;

    cin >> A >> B >> C >> D;

    last_two_digits = (A % 100 * B % 100 * C % 100  * D % 100 ) % 100;

    if(last_two_digits <= 9)
        cout << 0 << last_two_digits << endl;
    else
        cout << last_two_digits << endl;

    return 0;
}
