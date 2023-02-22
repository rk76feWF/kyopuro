#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

int main()
{
    long long X;
    scanf("%lld", &X);

    long long tmp = 100;
    int i;
    for (i = 1; ; i++)
    {
        tmp += tmp/100;
        printf("%lld, %lld\n", X, tmp);
        if (X <= tmp)
            break;
    }
    printf("%d\n", i);
}
