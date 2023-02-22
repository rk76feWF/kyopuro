#include <stdio.h>
#define bool _Bool
#define true 1
#define false 0
#define N 10

bool is_low(char);
void my_strset(char *, char, int);
int my_strlen(char *);

int main(void)
{
    char S[N + 1];
    my_strset(S, '\0', sizeof(S));

    for (int i = 0; i < my_strlen(S); ++i)
    {
        if (is_low(S[i]))
            S[i] = S[i] - 32;
    }
    printf("%s\n", S);

    return 0;
}

bool is_low(char c)
{
    return 'a' <= c && c <= 'z';
}

void my_strset(char *s, char c, int size)
{
    for (int i = 0; i < size; ++i)
        s[i] = c;
    return;
}

int my_strlen(char *s)
{
    int counter = 0;
    for (int i = 0;; ++i)
    {
        if (s[i] == '\0')
            break;
        ++counter;
    }

    return counter;
}
