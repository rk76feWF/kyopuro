#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define endl    '\n'

/*
\_^^_/ < Hello, World!\n
*/

int main()
{
    int N;
    string S;

    cin >> N >> S;

    for (int i = 1; i < N; i++)
    {
        if (S.at(i) == 'J')
            cout << S.at(i - 1) << endl;
    }
}
