#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); ++i)
    {
        S[i] = S[i] - 32;
    }

    cout << S << endl;
}
