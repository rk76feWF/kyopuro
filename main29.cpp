#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

/*
\_^^_/ < Hello, World!\n
*/

int main()
{
    int X;
    string S;
    cin >> X >> S;

    int A = 0, B = 0, C = 0, D = 0, E = 0;

    for (int i = 0; i < X; i++)
    {
        if (S.at(i) == 'A' && A == 0)
            A++;
        else if (S.at(i) == 'B' && B == 0)
            B++;
        else if (S.at(i) == 'C' && C == 0)
            C++;
        else if (S.at(i) == 'D' && D == 0)
            D++;
        else if (S.at(i) == 'E' && E == 0)
            E++;
    }

    if (A + B + C + D + E >= 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
