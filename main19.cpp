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
    int N;
    scanf("%d", &N);

    int ans;
    if (N%1000 == 0)
        ans = 0;
    else
        ans = 1000 - N%1000;

    printf("%d\n", ans);
}
