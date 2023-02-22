#include <iostream>
#include <string>
using namespace std;

bool isChar(char c)
{
    return ('A' <= c && c <= 'Z');
}
bool isInt(char c)
{
    return ('0' <= c && c <= '9');
}

int main(void)
{
    string S;
    cin >> S;

    int N = S.size();

    bool flag = true;

    if (N != 8)
        flag = false;

    if (!isChar(S[0]))
        flag = false;
    if (!isChar(S[N - 1]))
        flag = false;

    if (S[1] == '0')
        flag = false;

    for (int i = 1; i < 7; ++i)
    {
        if (!isInt(S[i]))
            flag = false;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
