#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    // 全探索
    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                if (max({A[i], A[j], A[k]}) == A[j])
                    ++counter;
            }
        }
    }

    cout << counter << endl;
    return 0;
}
