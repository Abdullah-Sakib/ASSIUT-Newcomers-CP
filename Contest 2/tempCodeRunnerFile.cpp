#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;

        if ((long long)n * (n + 1) / 2 < s)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> nums;
        long long remaining = s;

        for (int i = n; i >= 1; i--)
        {
            if (remaining >= i)
            {
                nums.push_back(i);
                remaining -= i;
            }

            if (remaining == 0)
                break;
        }

        if (remaining != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int num : nums)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
