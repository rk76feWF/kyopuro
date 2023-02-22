#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int N, T, A;
    scanf("%d%d%d", &N, &T, &A);

    int H[N];
    for (auto &i : H)
        scanf("%d", &i);

    double dmin = 1e9;
    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        double t = T - H[i] * 0.006;
        double d = abs(A - t);

        if (d < dmin)
        {
            dmin = d;
            ans = i;
        }
    }
    printf("%d\n", ans + 1);
}
