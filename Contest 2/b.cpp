#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int half = n / 2;
    int skip = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i <= half)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= half)
                {
                    if (skip == j)
                    {
                        cout << "\\";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else if (j == half + 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j == n - skip + 1)
                    {
                        cout << "/";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
            }
            if (skip < half)
            {
                skip++;
            }
        }
        else if (i == half + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == half + 1)
                {
                    cout << "X";
                }
                else
                {
                    cout << "*";
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= half)
                {
                    if (skip == j)
                    {
                        cout << "/";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else if (j == half + 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j == n - skip + 1)
                    {
                        cout << "\\";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
            }
            skip--;
        }

        cout << endl;
    }

    return 0;
}
