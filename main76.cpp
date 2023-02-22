#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);

    vector<pair<int, int>> data(N);
    for (auto &i : data)
        scanf("%d%d", &i.first, &i.second);

    // for (int i = 0; i < N; i++)
    //     scanf("%d%d", &data[i].first, &data[i].second);

    sort(data.begin(), data.end());

    printf("-%d%d-\n", data[0].first, data[0].second);
    printf("aaa");

    int counter = 0;
    for (int i = 0; M; i++)
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

    printf("%d\n", counter);
}