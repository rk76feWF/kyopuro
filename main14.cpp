#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
//#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

int main()
{
    int N;
    scanf("%d", &N);

    int i;
    long long sum = 0;
    for (i = 1; ;i++)
    {
        sum += i;

        if (sum >= N)
            break;
    }

    printf("%d\n", i);
}
