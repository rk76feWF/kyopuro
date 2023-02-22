#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (auto &a : A)
    {
        scanf("%d", &a);
    }

    int counter = 0;
    while (1)
    {
        bool can_do = true;
        for (auto a : A)
        {
            if (a % 2 == 1)
            {
                can_do = false;
            }
        }

        if (!can_do)
            break;

        for (auto &a : A)
        {
            a /= 2;
        }
        counter++;
    }

    printf("%d\n", counter);
}