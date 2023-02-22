#include <stdio.h>

int main(void)
{
    int N[10] = {}; // N2900 = {}による初期化

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", N[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        N[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", 0b101);
        printf("%d\n", N[i]);
    }
    return 0;
}
