#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long int N, M;
    scanf("%lld%lld", &N, &M);

    vector<pair<long long int, long long int>> data(N);
    for (auto &i : data)
        scanf("%lld%lld", &i.first, &i.second);

    sort(data.begin(), data.end());

    long long int counter = 0;
    for (long long int i = 0; M; i++)
    {
        if (M >= data[i].second)
        {
            counter += data[i].first * data[i].second;
            M -= data[i].second;
        }
        else
        {
            counter += data[i].first * M;
            M = 0;
        }
    }
    printf("%lld\n", counter);
}
