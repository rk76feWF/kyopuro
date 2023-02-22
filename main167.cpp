#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<int> B(M);
    for (int i = 0; i < M; ++i)
        cin >> B[i];

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (A[i] == B[j])
                ++counter;
        }
    }

    cout << counter << endl;
    return 0;
}
