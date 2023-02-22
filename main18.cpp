#include <bits/stdc++.h>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

/*
   \_^^_/ < Hello, World!\n
*/

int calc(int x)
{
    int tmp = 1;
    for (int i = 1; i <= x; i++)
    {
        tmp *= i;
    }
    return tmp;
}


int main()
{
    long long P;
    scanf("%lld", &P);

    int i;
    for (i = 1; ; i++)
    {
        if (calc(i)>= P)
        {
            i--;
            break;
        }
    }

    int cnt = 0;
    int j;
    for (int test = i; test>1; test--)
    {
        for (j = 1; ; j++)
        {
            if (P <= j*calc(test))
            {
                j--;
                break;
            }
        }
        cnt += j;
    }

    printf("%d\n", cnt);

}
