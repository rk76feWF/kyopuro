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
    int N;
    scanf("%d", &N);

    printf("%d\n", (10000-N)%1000);
}
