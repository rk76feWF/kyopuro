#include <cstdio>

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
    int min = 1 << 30;
    for (auto &i : m)
    {
        sum += i;

        if (min > i)
        {
            min = i;
        }
    }

    printf("%d\n", N + (X - sum) / min);
}