#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // データを受け取る
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int count = 0;
    // 変数 i の全探索
    for (int i = 0; i < N; ++i)
    {
        // 変数 j の全探索
        for (int j = i + 1; j < N; ++j)
        {
            if (A[i] + A[j] <= K)
            {
                count++;
            }
        }
    }

    // 答えを出力する
    cout << count << endl;
    return 0;
}
