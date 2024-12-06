#include <iostream>
using namespace std;

int main()
{

    string input;

    cin >> input;

    char operation;

    int A = 0, B = 0, operationIndex = 0;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            operation = input[i];
            operationIndex = i;
            break;
        }
    }

    A = stoi(input.substr(0, operationIndex));
    B = stoi(input.substr(operationIndex + 1));

    switch (operation)
    {
    case '+':
        cout << A + B << endl;
        break;
    case '-':
        cout << A - B << endl;
        break;
    case '*':
        cout << A * B << endl;
        break;
    case '/':
        cout << A / B << endl;
        break;
    }

    return 0;
}