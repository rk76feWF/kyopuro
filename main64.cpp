#include <cstdio>

int main()
{
    int S, A, B;
    scanf("%d%d%d", &S, &A, &B);

    if ((S - A) > 0) // 一個以上追加する場合
        printf("%d\n", ((S - A + B - 1) / B) * 100 + 250);
    else
        printf("250\n");
}