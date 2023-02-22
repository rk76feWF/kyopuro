#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);

    vector<int> l(N);
    for (auto &i : l)
        scanf("%d", &i);

    sort(l.rbegin(), l.rend());

    int sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += l[i];
    }

    printf("%d\n", sum);
}