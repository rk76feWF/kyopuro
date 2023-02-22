#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int N, X;
    scanf("%d%d", &N, &X);

    int m[N];
    for (auto &i : m)
    {
        scanf("%d", &i);
    }

    int sum = 0;
    for (auto i : m)
    {
        sum += i;
    }

    printf("%d\n", N + (X - sum) / *min_element(m, m + N));
}