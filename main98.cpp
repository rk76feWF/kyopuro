#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int x = 1, counter = 0;
    char c;
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &c);

        if (c == 'L')
        {
            if (x != 1)
                x--;
        }
        if (c == 'R')
        {
            if (x != 3)
                x++;
        }

        if (x == 3)
            counter++;
    }
    printf("%d\n", counter);
}