#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int ones_count = __builtin_popcount(N);

        int result = (1 << ones_count) - 1;

        cout << result << endl;
    }

    return 0;
}
