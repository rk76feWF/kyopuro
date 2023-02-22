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
    sort(d.rbegin(), d.rend());

    printf("%d\n", d[N / 2 - 1] - d[N / 2]);

    // int K = 1;
    // int counter = 0;
    // for (int i = 0; i < d[0]; i++)
    // {
    //     if (d[N / 2 - 1] >= K && d[N / 2] < K)
    //         counter++;
    //     K++;
    // }

    // printf("%d\n", counter);
}