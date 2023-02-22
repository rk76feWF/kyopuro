#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    if (N / 10 == N % 10)
        printf("1\n");
    else
        printf("0\n");
}