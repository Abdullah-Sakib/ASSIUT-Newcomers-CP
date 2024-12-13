#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, s;
        cin >> n >> s;

        if ((n * (n + 1)) / 2 < s)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> nums;
        long long sum = 0;
        for (long long i = n; i >= 1; i--)
        {
            if ((i + sum) <= s)
            {
                sum += i;
                nums.push_back(i);
            }

            if (sum == s)
            {
                break;
            }
        }

        for (long long i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
