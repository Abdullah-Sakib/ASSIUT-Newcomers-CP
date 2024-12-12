#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y, sum = 0;
        cin >> x >> y;

        int min = x < y ? x : y;
        int max = x > y ? x : y;

        for (int j = min + 1; j < max; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}