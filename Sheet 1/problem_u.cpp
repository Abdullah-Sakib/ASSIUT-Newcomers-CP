#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;

    cin >> x;

    if (floor(x) == x)
    {
        cout << "int " << static_cast<int>(x) << endl;
    }
    else
    {
        int ingegerPart = static_cast<int>(x);
        float floorPart = x - ingegerPart;
        cout << "float " << ingegerPart << " " << floorPart << endl;
    }

    return 0;
}