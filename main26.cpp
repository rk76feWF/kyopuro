#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

inline int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
inline int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    int A, B, K;
    scanf("%d%d%d", &A, &B, &K);

    for (int i = A; i <= min(B, A+K-1); i++)
        printf("%d\n", i);

    for (int i = max(A+K, B-K+1); i <= B; i++)
        printf("%d\n", i);
}
