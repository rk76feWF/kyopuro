#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")

/*
\_^^_/ < Hello, World!\n
*/

int func1(int tmp)
{
    int i;
    for (i = 0;; i++)
    {
        if (tmp % 2 != 0)
            break;
        tmp /= 2;
    }
    return i;
}

int main()
{
    int N;
    scanf("%d", &N);

    int result = 1;
    for (int i = 1; i <= N; i++)
    {
        if (func1(i) > func1(result))
            result = i;
    }
    printf("%d\n", result);
}
