#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;

    long long product = n * k;

    double result = static_cast<double>(product) / a;

    if (result != floor(result))
    {
        cout << "double" << endl;
    }
    else
    {
        long long int_result = static_cast<long long>(result);

        if (int_result >= numeric_limits<int>::min() && int_result <= numeric_limits<int>::max())
        {
            cout << "int" << endl;
        }
        else
        {
            cout << "long long" << endl;
        }
    }

    return 0;
}
