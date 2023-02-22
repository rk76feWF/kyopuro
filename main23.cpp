#include <cstdio>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
   \_^^_/ < Hello, World!\n
*/

int factorial(int i) { return i ? factorial(i - 1) * i : 1; }

int main()
{
    int P;
    scanf("%d", &P);

    int answer = 0;
    for (int i = 0; i <= 10; i++)
    {
        int divisor = factorial(i + 1);
        int residue = P % divisor;
        answer += residue / factorial(i);
        P -= residue;
    }

    printf("%d\n", answer);
}
