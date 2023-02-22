#include <iostream>
#include <string>
using namespace std;

int isUbin(int A, int B, string S)
{
    if (A + B + 1 != S.size())
    {
        return -1;
    }

    if (S[A] != '-')
    {
        return -1;
    }

    int haifun = 0;
    for (auto c : S)
    {
        if (c == '-')
        {
            haifun++;
        }
    }

    if (haifun != 1)
    {
        return -1;
    }

    return 0;
}

int main()
{
    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    if (isUbin(A, B, S) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}