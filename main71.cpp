#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    int plus = A + B;
    int minus = A - B;

    printf("%d\n", max(plus, minus));
    printf("%d\n", min(plus, minus));
}