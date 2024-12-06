#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Compute the logarithmic comparison
    long double log_AB = B * log(A);
    long double log_CD = D * log(C);

    if (log_AB > log_CD)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
