#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    string S;
    cin >> N >> S;

    for (int i = 0; i < N - 1; ++i)
    {
        string Temp = S.substr(i, 2);
        if (Temp == "jj")
        {
            S[i] = 'J';
            S[i + 1] = 'J';
        }
        else if (Temp == "oo")
        {
            S[i] = 'O';
            S[i + 1] = 'O';
        }
        else if (Temp == "ii")
        {
            S[i] = 'I';
            S[i + 1] = 'I';
        }
    }
    cout << S << endl;
}
