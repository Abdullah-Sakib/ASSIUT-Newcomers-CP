#include <iostream>
using namespace std;

int main()
{
    int n, line = 1;
    cin >> n;

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= line; j++)
        {
            cout << "*";
        }
        space--;
        line += 2;
        cout << endl;
    }

    space = 0;
    line -= 2;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= line; j++)
        {
            cout << "*";
        }
        space++;
        line -= 2;
        cout << endl;
    }

    return 0;
}
