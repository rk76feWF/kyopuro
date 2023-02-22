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

    int M;
    cin >> M;

    vector<int> B(M);
    for (auto &i : B)
        cin >> i;

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        counter += A[i];
        for (int j = 0; j < M; ++j)
        {
            if (counter == B[j])
            {
                counter = 0;
                break;
            }
        }
    }

    cout << counter << endl;
    return 0;
}
