#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);

    vector<int> h(N);
    for (auto &i : h)
        scanf("%d", &i);

    sort(h.begin(), h.end());

    int min = 1e9;
    for (int i = 0; i < N - K + 1; i++)
    {
        int tmp = h[i + K - 1] - h[i];
        if (tmp < min)
            min = tmp;
    }

    printf("%d\n", min);
}