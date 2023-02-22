#include <cstdio>
#include <cstring>

int main()
{
    char S[16];
    scanf("%s", S);

    if (strcmp(S, "Hello,World!") == 0)
        printf("AC");
    else
        printf("WA");
}