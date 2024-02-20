#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    if(S == '+')
       {
            if(C == A + B)
                cout << "Yes" << endl;
            else
                cout << A + B << endl;
       }
    else if(S == '-')
      {
          if(C == A - B)
                cout << "Yes" << endl;
            else
                cout << A - B << endl;
      }
    else if(S == '*')
      {
          if(C == A * B)
                cout << "Yes" << endl;
            else
                cout << A * B << endl;
      }

    return 0;
}