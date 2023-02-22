#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int flag[N];
    for (auto &f : flag)
        f = 0;

    int tmp;
    for (int i = 0; i < N * 2 - 1; i++)
    {
        cin >> tmp;
        flag[tmp - 1]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (flag[i] == 1)
            printf("%d\n", i + 1);
    }
}