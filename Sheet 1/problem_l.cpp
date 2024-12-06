#include <iostream>
using namespace std;

int main()
{

    string first_name_1, last_name_1, first_name_2, last_name_2;

    cin >> first_name_1 >> last_name_1 >> first_name_2 >> last_name_2;

    if (last_name_1 == last_name_2)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}