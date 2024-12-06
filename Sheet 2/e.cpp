#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;

    int inputs[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inputs[i];
        if (inputs[i] > max)
            max = inputs[i];
    }

    cout << max << endl;

    return 0;
}