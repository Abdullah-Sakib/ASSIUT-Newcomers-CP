#include <iostream>
using namespace std;

int main()
{

    char A;

    cin >> A;

    if (A >= 'a' && A <= 'z')
    {
        A = A - 32;
    }
    else if (A >= 'A' && A <= 'Z')
    {
        A = A + 32;
    }

    cout << A << endl;

    return 0;
}