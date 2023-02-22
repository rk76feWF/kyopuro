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
    int A, B;
    scanf("%d%d", &A, &B);

    int result = A + B;

    result = result % 13 + 1;

    printf("%d\n", result);
}
