#include <bits/stdc++.h>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

int main()
{
    int N, X, T;
    scanf("%d%d%d", &N, &X, &T);

    printf("%d\n", (N+X-1)/X * T);
}
