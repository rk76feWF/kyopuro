#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int N)
{
    string S = to_string(N);

    bool flag = true;
    for (int i = 0; i < S.size() / 2; ++i)
    {
        if (S[i] != S[S.size() - i - 1])
            flag = false;
    }
    return flag;
}

int main(void)
{
    int L, R;
    cin >> L >> R;

    int counter = 0;
    for (int i = L; i <= R; ++i)
    {
        if (is_palindrome(i))
            ++counter;
    }

    cout << counter << endl;
    return 0;
}
