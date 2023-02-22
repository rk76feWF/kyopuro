#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
\_^^_/ < Hello, World!\n
*/

inline int func(int num, int aaa)
{
    int result = 0;
    int tmp = 1;
    while (num > 0)
    {
        result += tmp * (num % 10);
        num /= 10;
        tmp *= aaa;
    }

    return result;
}

int main()
{
    int K, A, B;
    scanf("%d%d%d", &K, &A, &B);

    printf("%d\n", func(A, K) * func(B, K));
}
