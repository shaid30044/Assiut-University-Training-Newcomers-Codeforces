#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, max, mid, min, tempA, tempB, tempC;

    cin >> A >> B >> C;

    tempA = A;
    tempB = B;
    tempC = C;
    max = A;

    if (max <= B)
    {
        if (max < B)
          max = B;

        min = A;
        mid = C;

        if (min > C)
          {
              min = C;
              mid = A;
          }
    }
    if (max <= C)
    {
        if (max < C)
          max = C;

        min = A;
        mid = B;

        if (min > B)
          {
              min = B;
              mid = C;
          }
    }
    if (max > B && max > C)
    {
        min = B;
        mid = C;

        if(min > C)
           {
               min = C;
               mid = B;
           }
    }

    cout << min << endl
         << mid << endl
         << max << endl;
    cout << endl
         << tempA << endl
         << tempB << endl
         << tempC << endl;

    return 0;
}