#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool deciation = false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            deciation = true;
            break;
        }
    }

    if (deciation == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}