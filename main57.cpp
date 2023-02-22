#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, T, A;
    cin >> N >> T >> A;

    vector<int> H(N);
    for (auto &i : H)
    {
        cin >> i;
    }

    for (auto i : H)
    {
        if (abs(A - (T - i) * 0.006))
    }
}