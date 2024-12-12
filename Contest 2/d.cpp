#include <iostream>
using namespace std;

long long sum_upto(long long n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long L, R;
        cin >> L >> R;

        if (L > R)
            swap(L, R);

        long long result = sum_upto(R) - sum_upto(L - 1);
        cout << result << endl;
    }

    return 0;
}
