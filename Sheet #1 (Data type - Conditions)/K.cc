#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, max, min;

    cin >> A >> B >> C;

    max = A;

    if (max <= B)
    {
        if (max < B)
          max = B;

        min = A;

        if (min >= C)
          min = C;
    }
    if (max <= C)
    {
        if (max < C)
          max = C;

        min = A;

        if (min >= B)
          min = B;
    }
    if (max > B && max > C)
    {
        min = B;

        if(min > C)
            min = C;
    }

    cout << min << " " << max << endl;

    return 0;
}