#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    vector<int> T(N);
    T[0] = 0, T[1] = A[1];

    for (int i = 2; i < N; ++i)
    {
        T[i] = min(T[i - 1] + A[i], T[i - 2] + 2 * A[i]);
        cout << T[i] << endl;
    }

    cout << T[N - 1] << endl;
    return 0;
}
