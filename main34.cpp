#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define endl '\n'

/*
\_^^_/ < Hello, World!\n
*/

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    bool flag = false;

    int i;
    for (i = 1; i <= 1000; i++)
    {
        if ((int)(i * 0.08) == A && (int)(i * 0.10) == B)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        printf("%d\n", i);
    else
        printf("-1\n");
}
