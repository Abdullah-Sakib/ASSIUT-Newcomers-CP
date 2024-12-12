#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        return 1;
    }

    int term1 = 0, term2 = 1;

    if (n >= 1)
        cout << term1 << " ";
    if (n >= 2)
        cout << term2 << " ";

    for (int i = 3; i <= n; i++)
    {
        int nextTerm = term1 + term2;
        cout << nextTerm << " ";
        term1 = term2;
        term2 = nextTerm;
    }
    return 0;
}
