#include <cstdio>

inline int how_many_times(int num)
{
    int counter = 0;
    while (num % 2 == 0)
    {
        num /= 2;
        counter++;
    }
    return counter;
}

inline int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

constexpr int INF = 1 << 30;

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (auto &a : A)
    {
        scanf("%d", &a);
    }

    int result = INF;
    for (auto a : A)
    {
        int counter = how_many_times(a);
        result = min(result, counter);
    }
    printf("%d\n", result);
}