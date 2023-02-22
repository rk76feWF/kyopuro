#include <cstdio.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

/*
   \_^^_/ < Hello, World!\n
*/

int main()
{
    long long N;
    int K;

    scanf("%lld%d", &N, &K);

    rep(a, K) {
        if (N%200 == 0) {
            N = N/200;
        } else {
            N = N*1000 + 200;
        }
    }
    printf("%lld\n", N);
}
