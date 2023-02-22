#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    char S[N + 1];
    scanf("%s", S);

    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0) // 1, 3, 5...番目
        {
            if (S[i] != 'I')
                counter++;
        }
        else // 2, 4, 6...番目
        {
            if (S[i] != 'O')
                counter++;
        }
    }

    printf("%d\n", counter);
}