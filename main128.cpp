#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<int> count(9);
    for (int i = 0; i < N; ++i)
        ++count[A[i] - 1];

    int idx = 0;
    for (int i = 1; i < 9; ++i)
    {
        if (count[i] > count[idx])
            idx = i;
    }

    cout << idx + 1 << endl;
}
