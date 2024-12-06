#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long eye, mouth, body;
    cin >> eye >> mouth >> body;

    long long count = 0;

    long long maxFigures = min(eye, min(mouth, body));
    count += maxFigures;
    eye -= maxFigures;
    mouth -= maxFigures;
    body -= maxFigures;

    if (body > 0 && eye >= 2)
    {
        long long figureFromBody = min(body, eye / 2);
        count += figureFromBody;
    }

    cout << count << endl;

    return 0;
}
