#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, X;
    scanf("%d%d", &N, &X);

    vector<int> m(N);
    for (auto &i : m)
    {
        scanf("%d", &i);
    }

    int sum = 0;
    for (auto i : m)
    {
        sum += i;
    }

    sort(m.begin(), m.end());

    printf("%d\n", N + (X - sum) / m[0]);
}