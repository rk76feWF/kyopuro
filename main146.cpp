#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> S[i];
    }

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        bool flag = true;
        int size = S[i].size();
        for (int j = 0; j < size / 2; ++j)
        {
            if (S[i][j] != S[i][size - j - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ++counter;
        }
    }
    cout << counter << endl;
    return 0;
}
