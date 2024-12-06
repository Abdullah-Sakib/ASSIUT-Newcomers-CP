#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    double temp = static_cast<double>(a) / b;

    cout << "floor " << a << " / " << b << " = " << static_cast<int>(floor(temp)) << endl;
    cout << "ceil " << a << " / " << b << " = " << static_cast<int>(ceil(temp)) << endl;
    cout << "round " << a << " / " << b << " = " << static_cast<int>(round(temp)) << endl;

    return 0;
}