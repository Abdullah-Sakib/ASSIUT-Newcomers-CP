#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;

    char converted = int(input) >= 122 ? 97 : int(input) + 1;

    cout << converted << endl;

    return 0;
}