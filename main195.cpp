#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, T;
    cin >> N >> T;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    int i;
    for (i = 0; i < N; ++i)
    {
        if (T - A[i] >= 0)
        {
            T -= A[i];
            if (i + 1 == N)
                i = -1;
        }
        else
        {
            break;
        }
    }

    cout << i + 1 << ' ' << T << endl;
}
