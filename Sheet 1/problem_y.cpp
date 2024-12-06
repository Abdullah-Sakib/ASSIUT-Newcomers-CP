#include <iostream>
#include <iomanip> // Print the result as two digits

using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long last_two_digits = ((A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100)) % 100;

    // Print the result as two digits
    cout << setw(2) << setfill('0') << last_two_digits << endl;

    return 0;
}
