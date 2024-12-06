#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int second = a % 10;
    a /= 10;
    int first = a % 100;

    if (second == 0)
    {
        cout << "YES" << endl;
    }
    else if (first % second == 0 || second % first == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}