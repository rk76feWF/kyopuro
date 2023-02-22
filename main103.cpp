#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<pair<int, int>> data(N);
    for (auto &i : data)
        scanf("%d%d", &i.first, &i.second);

    for (auto i : data)
        printf("first: %d, second: %d\n", i.first, i.second);
}