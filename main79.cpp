#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    vector<pair<int, int>> data(M);

    for (auto &i : data)
        scanf("%d%d", &i.first, &i.second);

    vector<size_t> indices(data.size());
    iota(indices.begin(), indices.end(), 0);

    // ソートする。
    sort(indices.begin(), indices.end(), [&data](size_t i1, size_t i2)
         { return data[i1] < data[i2]; });

    sort(data.begin(), data.end());

    // 初期化
    vector<int> counter(N);
    for (auto &i : counter)
        i = 0;

    char str[M][13];

    for (int i = 0; i < M; i++)
    {
        counter[data[i].first]++;
        sprintf(str[indices[i]], "%06d%06d", data[i].first, counter[data[i].first]);
    }

    for (int i = 0; i < M; i++)
    {
        printf("%s\n", str[i]);
    }
}