#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A, B, C, D;

    cin >> A >> B >> C >> D;

    if(B * log(A) - D * log(C) > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}