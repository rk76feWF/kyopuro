#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    if (S[0] != S[1] && S[0] != S[2])
        cout << S[0];
    else if (S[1] != S[0] && S[1] != S[2])
        cout << S[1];
    else if (S[2] != S[0] && S[2] != S[1])
        cout << S[2];
    else
        cout << -1;

    cout << endl;

    return 0;
}
