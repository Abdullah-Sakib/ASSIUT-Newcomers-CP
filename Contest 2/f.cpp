#include <iostream>
using namespace std;

void f(long long x, int &m)
{
    int count = 0;

    while (x > 0)
    {
        if (x % 2 == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        x /= 2;
    }

    if (count > m)
    {
        m = count;
    }
}

int main()
{
    int t;
    cin >> t;

    int max = 0;

    while (t--)
    {
        long long n;
        cin >> n;
        f(n, max);
    }

    cout << max << endl;

    return 0;
}