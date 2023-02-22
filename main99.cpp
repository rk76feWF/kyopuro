#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int counter[N];
    for (auto &i : counter)
        i = 0;

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