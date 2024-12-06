#include <iostream>
using namespace std;

bool isLucky(int num)
{
    while (num > 0)
    {
        int last = num % 10;
        if (last != 4 && last != 7)
        {
            return false;
        }

        num /= 10;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    bool found = false;

    for (int i = n; i <= m; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}