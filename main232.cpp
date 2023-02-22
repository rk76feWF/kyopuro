#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, T, A;
    cin >> N >> T >> A;
    vector<int> H(N);
    for (auto &i : H)
        cin >> i;

    int idx = 0, diff = min(abs(T - H[0] * 0.006), abs(H[0] * 0.006 - T));
    for (int i = 1; i < N; ++i)
    {
        if (diff > min(abs(T - H[i] * 0.006), abs(H[i] * 0.006 - T)))
        {
            idx = i;
            diff = min(abs(T - H[i] * 0.006), abs(H[i] * 0.006 - T));
        }
    }

    cout << idx << endl;
    return 0;
}
