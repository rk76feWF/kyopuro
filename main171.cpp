#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (A[i] + A[j] == K)
                ++counter;
        }
    }

    cout << counter << endl;
    return 0;
}
