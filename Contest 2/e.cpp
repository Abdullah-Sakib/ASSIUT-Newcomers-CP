#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long seat;
    cin >> seat;

    seat++;

    int column = 0;
    long long row = 0;

    row = ceil(static_cast<double>(seat) / 4);

    if ((row - 1) % 2 == 0 || (row - 1) == 0)
    {
        if (seat % 4 == 0)
        {
            column = 4;
        }
        else
        {
            column = seat % 4;
        }
    }
    else
    {
        if (seat % 4 == 0)
        {
            column = 1;
        }
        else
        {
            column = 5 - (seat % 4);
        }
    }

    cout << row - 1 << " " << column - 1 << endl;

    return 0;
}