#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    vector<int> B(M);
    for (auto &i : B)
        cin >> i;

    // 全探索
    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (A[i] + B[j] == K)
                ++counter;
        }
    }

    cout << counter << endl;
    return 0;
}
