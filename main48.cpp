#include <cstdio>

int main()
{
    long long N, D;
    scanf("%lld%lld", &N, &D);

    int counter = 0;

    for (int i = 0; i < N; i++)
    {
        long long int x, y;
        scanf("%lld%lld", &x, &y);

        if (x * x + y * y <= D * D)
        {
            counter++;
        }
    }

    printf("%d\n", counter);
}