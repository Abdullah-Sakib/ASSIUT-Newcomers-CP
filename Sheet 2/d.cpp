#include <iostream>
using namespace std;

int main()
{
    int X;
    const int correctPassword = 1999;

    while (cin >> X)
    {
        if (X == correctPassword)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
