#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int reversed = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        reversed = (reversed * 10) + lastDigit;
        n /= 10;
    }

    if (temp == reversed)
    {
        cout << reversed << endl
             << "YES" << endl;
    }
    else
    {
        cout << reversed << endl
             << "NO" << endl;
    }

    return 0;
}