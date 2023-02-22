#include <cstdio>

int main()
{
    int N, X;
    scanf("%d%d", &N, &X);

    int L[N];
    for (auto &tl : L)
    {
        scanf("%d", &tl);
    }

    int i;
    int counter = 0;
    for (i = 0; counter <= X; i++)
    {
        counter += L[i];
    }

    printf("%d\n", i);
}
