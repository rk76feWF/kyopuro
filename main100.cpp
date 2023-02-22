#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<int> counter(N);

    int tmp = 0;
    for (int i = 0; i < N * 2 - 1; i++)
    {
        scanf("%d", &tmp);
        counter[tmp - 1]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (counter[i] == 1)
            printf("%d\n", i + 1);
    }
}