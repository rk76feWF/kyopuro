#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto &i : S)
        cin >> i;

    bool flag = false;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (S[i] == S[j])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
