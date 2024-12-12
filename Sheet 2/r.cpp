#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    while (n > 0 || m > 0)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            break;
        }

        int min = n < m ? n : m;
        int max = n > m ? n : m;
        int sum = 0;

        for (int i = min; i <= max; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}