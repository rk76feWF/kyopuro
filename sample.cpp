#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int sum = 0;
    while(N > 0) {
        sum += N%10;
        N /= 10;
    }

    printf("%d\n", sum);
}
