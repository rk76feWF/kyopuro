#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int max = 0, tmp, counter = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        if (tmp >= max)
        {
            max = tmp;
            counter++;
        }
    }

    printf("%d\n", counter);
}