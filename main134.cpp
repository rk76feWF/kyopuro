#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    char c;
    cin >> S >> c;

    bool is_include = false;
    for (int i = 0; i < S.size(); ++i)
    {
        if (S[i] == c)
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
