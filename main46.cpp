#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 入力(範囲for文を用いる)
    int N;
    cin >> N;
    vector<int> a(N);
    for (auto &ai : a)
    {
        cin >> ai;
    }

    // 配列aの各要素を大きい順にソートする
    sort(a.begin(), a.end(), greater<int>());

    // 答えを表す変数
    int result = 0;

    // 配列aの各要素を交互に足し引きしていく
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            result += a[i];
        }
        else
        {
            result -= a[i];
        }
    }

    // 出力
    cout << result << endl;
}