#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double R, pi = 3.141592653;

    cin >> R;
    cout << fixed << setprecision(9) << pi * R * R << endl;

    return 0;
}
