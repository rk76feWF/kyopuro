#include <iostream>
#include <vector>
using namespace std;

// 整数numが2で何回割り切れるか
int how_many_times(int num)
{
    // 2で割れる回数を表す変数
    int counter = 0;

    // 2で割れる限り、破り続ける
    while (num % 2 == 0)
    {
        // numを2で割る
        num /= 2;

        // counterを1増やす
        counter++;
    }
    return counter;
}

// 十分大きな値
constexpr int INF = 1 << 30;

int main()
{
    // 入力(配列を範囲for文で受け取る)
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
    {
        cin >> a;
    }

    // 答えを表す変数(十分に大きい値に初期化しておく)
    int result = INF;

    // 2で割れる回数の最小値を求める
    for (auto a : A)
    {
        // 2で何回割れるか
        int counter = how_many_times(a);

        // resultよりcounterのほうが小さい場合は更新する
        result = min(result, counter);
    }

    cout << result << endl;
}