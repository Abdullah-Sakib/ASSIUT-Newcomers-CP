#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i += k)
    {
        int minVal = num[i];
        for (int j = i; j < i + k && j < n; j++)
        {
            if (num[j] < minVal)
            {
                minVal = num[j];
            }
        }
        cout << minVal << " ";
    }

    cout << endl;
    return 0;
}