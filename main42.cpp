#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (auto &a : A)
    {
        scanf("%d", &a);
    }

    int cnt = 0;
    bool can_do = true;
    while (can_do)
    {
        for (auto a : A)
        {
            if (a % 2 != 0)
            {
                can_do = false;
            }
        }

        for (auto &a : A)
        {
            a /= 2;
        }

        if (can_do == false)
        {
            break;
        }
        cnt++;
    }
    printf("%d\n", cnt);
}