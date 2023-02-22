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
    int A, B, T;
    scanf("%d%d%d", &A, &B, &T);

    printf("%d\n", T/A * B);
}
