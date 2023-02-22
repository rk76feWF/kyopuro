#include <iostream>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
    int N = S.size();

    int counter = 0;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        bool flag = false;
        for (int i = 0; i < N; ++i)
        {
            if (S[i] == c)
            {
                flag = true;
            }
        }
        if (flag)
        {
            ++counter;
        }
    }
    cout << counter << endl;
}
