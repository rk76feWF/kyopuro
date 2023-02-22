#include <cstdio>
#include <cmath>
#include <initializer_list>

int main()
{
    int N, D;
    scanf("%d%d", &N, &D);

    int X[N], Y[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d%d", X + i, Y + i);
    }

    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (D >= sqrt(pow(X[i], 2) + pow(Y[i], 2)))
        {
            counter++;
        }
    }

    printf("%d\n", counter);
}
