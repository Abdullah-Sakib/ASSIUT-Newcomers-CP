#include <iostream>
using namespace std;

int main()
{
    int input;

    cin >> input;

    int year = 0, month = 0;

    while (input >= 365)
    {
        year += 1;
        input -= 365;
    }

    while (input >= 30 && input < 365)
    {
        month += 1;
        input -= 30;
    }

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << input << " days" << endl;
    return 0;
}