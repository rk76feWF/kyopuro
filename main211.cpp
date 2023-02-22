#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    for (int i = 0; i < N; ++i)
    {
        int max = 0;
        for (int j = 0; j < N; ++j)
        {
            int tmp = abs(A[i] - A[j]);
            if (tmp > max)
                max = tmp;
        }
        cout << max << endl;
    }
    return 0;
}
