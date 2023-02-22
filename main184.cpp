#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> T(N + 1);
    T[0] = 1, T[1] = 1;

    for (int i = 2; i < N + 1; ++i)
    {
        T[i] = T[i - 1] + T[i - 2];
    }

    cout << T[N] << endl;
    return 0;
}
