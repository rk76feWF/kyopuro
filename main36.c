#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d\n", 2 * ilogb(N));

    return 0;
}
