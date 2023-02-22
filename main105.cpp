#include <cstdio>

int main()
{
    int AB[2];
    scanf("%d%d", &AB[0], &AB[1]);

    int t[] = {4, 2, 1};
    bool flag[3];
    for (auto &f : flag)
        f = false;

    for (auto &ab : AB)
    {
        for (int i = 0; i < 3; i++)
        {
            if (ab - t[i] >= 0)
            {
                ab -= t[i];
                flag[i] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (flag[i] == true)
            ans += t[i];
    }

    printf("%d\n", ans);
}