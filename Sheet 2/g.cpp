#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        long long product = 1;

        for (int i = 1; i <= c; i++)
        {
            product *= i;
        }

        cout << product << endl;
    }

    return 0;
}