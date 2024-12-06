#include <iostream>
using namespace std;

int main()
{
    int n, m, greatest = 0;
    cin >> n >> m;

    for (int i = 1; i <= (n > m ? n : m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            if (i > greatest)
            {
                greatest = i;
            }
        }
    }

    cout << greatest << endl;

    return 0;
}