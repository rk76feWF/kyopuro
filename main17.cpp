#include <cstdio>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

int main()
{
    int A, B, C, D;
    scanf("%d%d%d%d", &A, &B, &C, &D);

    int X = (A+D-1)/D;
    int Y = (C+B-1)/B;

    if (X >= Y)
        printf("Yes\n");
    else
        printf("No\n");
}

