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

    int cnt = 0;
    for (int i = A; i <= B; i++)
    {
        if (i / 10000 == i % 10 && (i % 10000) / 1000 == i % 100 / 10)
            cnt++;
    }
    printf("%d\n", cnt);
}
