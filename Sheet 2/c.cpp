#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}