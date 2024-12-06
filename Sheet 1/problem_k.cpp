#include <iostream>
using namespace std;

int main()
{

    long long A, B, C;
    cin >> A >> B >> C;

    long long min = A, max = A;

    if (B > max)
        max = B;
    if (B < min)
        min = B;

    if (C > max)
        max = C;
    if (C < min)
        min = C;

    cout << min << " " << max << endl;

    return 0;
}