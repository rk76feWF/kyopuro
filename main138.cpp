#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S, T;
    cin >> S >> T;

    bool is_include = false;
    for (int i = 0; i <= S.size() - T.size(); ++i)
    {
        int cnt;
        for (cnt = 0; cnt < T.size(); ++cnt)
        {
            if (S[i + cnt] != T[cnt])
                break;
        }
        if (cnt == T.size())
        {
            is_include = true;
            break;
        }
    }

    if (is_include)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
