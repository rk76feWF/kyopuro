#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> data(5);
    for (auto &i : data)
    {
        scanf("%d", &i);
    }

    sort(data.begin(), data.end());

    int counter = 0, tmp = 101;
    for (auto i : data)
    {
        if (i != tmp)
        {
            counter++;
            tmp = i;
        }
    }

    printf("%d\n", counter);
}