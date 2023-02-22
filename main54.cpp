#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int H[N];
    for (auto &i : H)
    {
        scanf("%d", &i);
    }

    int counter = 0;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (H[i] >= max)
        {
            counter++;
            max = H[i];
        }
    }
    printf("%d\n", counter);
}