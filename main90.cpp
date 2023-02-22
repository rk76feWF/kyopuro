#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int cJ = 0, cO = 0, cI = 0;
    char tmp;
    for (int i = 0; i < N + 1; i++)
    {
        scanf("%c", &tmp);
        if (tmp == 'J')
            cJ++;
        if (tmp == 'O')
            cO++;
        if (tmp == 'I')
            cI++;
    }

    for (int i = 0; i < cJ; i++)
        printf("J");
    for (int i = 0; i < cO; i++)
        printf("O");
    for (int i = 0; i < cI; i++)
        printf("I");
    printf("\n");
}