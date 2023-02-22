#include <iostream>
using namespace std;

bool is_uppercase(const char c)
{
    return 'A' <= c && c <= 'Z';
}

bool is_digit(const char c)
{
    return '0' <= c && c <= '9';
}

int main(void)
{
    string S;
    cin >> S;

    bool flag = true;

    if (!is_uppercase(S.front()))
        flag = false;

    if (!is_uppercase(S.back()))
        flag = false;

    if (S.size() != 8)
        flag = false;

    for (int i = 1; i < 7 && flag; ++i)
    {
        if (!is_digit(S[i]))
            flag = false;
    }

    if (S[1] == '0')
        flag = false;

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
