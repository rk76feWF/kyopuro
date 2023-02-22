#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int x = 1, counter = 0;
    char LR;
    for (int i = 0; i < N; i++)
    {
        cin >> LR;
        if (LR == 'L')
        {
            x--;
            if (x == 0)
                x++;
        }
        if (LR == 'R')
        {
            x++;
            if (x == 4)
                x--;
        }
        if (x == 3)
            counter++;
    }

    printf("%d\n", counter);
}