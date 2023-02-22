#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<int> d(N);
    for (auto &i : d)
        scanf("%d", &i);

    sort(d.begin(), d.end());

    printf("%d\n", d[N / 2] - d[N / 2 - 1]);
}