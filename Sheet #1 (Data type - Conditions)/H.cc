#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    
    cin >> A >> B;

    double floor_result = floor(A / B);
    double ceil_result = ceil(A / B);
    double round_result = round(A / B);

    cout << "floor " << A << " / " << B << " = " << floor_result << endl
         << "ceil " << A << " / " << B << " = " << ceil_result << endl
         << "round " << A << " / " << B << " = " << round_result << endl;

    return 0;
}
