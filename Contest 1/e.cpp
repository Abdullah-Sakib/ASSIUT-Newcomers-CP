#include <iostream>
using namespace std;

int main()
{
    int odd, even;
    cin >> odd >> even;

    if (odd == 0 && even == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    if (odd > even + 1 || even > odd + 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
