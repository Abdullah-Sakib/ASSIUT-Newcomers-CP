#include <iostream>
using namespace std;

int main()
{
    char s;
    int n;
    cin >> s >> n;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        switch (s)
        {
        case '+':
            for (int i = 1; i <= num; i++)
            {
                cout << "+";
            }
            break;
        case '-':
            for (int i = 1; i <= num; i++)
            {
                cout << "-";
            }
            break;
        case '*':
            for (int i = 1; i <= num; i++)
            {
                cout << "*";
            }
            break;
        case '/':
            for (int i = 1; i <= num; i++)
            {
                cout << "/";
            }
            break;
        }
        cout << endl;
    }

    return 0;
}