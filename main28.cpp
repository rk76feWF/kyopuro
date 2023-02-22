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
    int X, Y, Z;
    scanf("%d%d%d", &X, &Y, &Z);

    printf("%d\n", (X + Y) <= Z);
}
