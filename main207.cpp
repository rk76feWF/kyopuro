#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    sort(A.rbegin(), A.rend());

    int alice = 0, bob = 0;

    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0)
            alice += A[i];
        else
            bob += A[i];
    }

    cout << alice - bob << endl;
    return 0;
}
