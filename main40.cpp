#include <iostream>
#include <vector>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define endl '\n'
/*
\_^^_/ < Hello, World!\n
*/

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cout << A[i] << endl;
    }
}
