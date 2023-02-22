#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    int N = S.size();
    bool is_circular = true;
    for (int i = 0; i < (N / 2); ++i)
    {
        if (S[i] != S[N - i - 1])
            is_circular = false;
    }

    if (is_circular)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
