#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    bool flag[N];

    int tmp;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        flag[tmp - 1] = ~flag[tmp - 1];
    }

    for (auto i : flag)
    {
        if (i == false)
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
}