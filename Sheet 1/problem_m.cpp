#include <iostream>
using namespace std;

int main()
{

    char A;

    cin >> A;

    int value = int(A);

    if (value >= 48 && value <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (value >= 65 && value <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else if (value >= 97 && value <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }

    return 0;
}