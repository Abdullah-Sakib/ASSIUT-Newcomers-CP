#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int discount, price;
    cin >> discount >> price;

    double pb = price / (1 - (discount / 100.00));

    cout << fixed << setprecision(2) << pb << endl;

    return 0;
}
