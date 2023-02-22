#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> data(3);
    for (auto &i : data)
        scanf("%d", &i);

    sort(data.rbegin(), data.rend());

    printf("%d\n", data[1]);
}