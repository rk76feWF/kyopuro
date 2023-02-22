#include <iostream>
using namespace std;

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);

    int R_cnt = 0;
    char tmp;
    for (int i = 1; i < N; i++)
    {
        cin >> tmp;
        if (tmp == 'R')
            R_cnt++;
    }
    if (K == R_cnt)
        cout << "W\n";
    else
        cout << "R\n";
}