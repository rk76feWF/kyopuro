#include <cstdio>

int main(void)
{
    int K;
    scanf("%d", &K);

    printf("%d:%02d\n", 21 + K / 60, K % 60);
    return 0;
}
