#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    vector<int> A(X);
    for (auto &i : A)
        cin >> i;

    vector<int> B(Y);
    for (auto &i : B)
        cin >> i;

    vector<int> C(Z);
    for (auto &i : C)
        cin >> i;

    // 全探索
    int counter = 0;
    for (int i = 0; i < X; ++i)
    {
        for (int j = 0; j < Y; ++j)
        {
            for (int k = 0; k < Z; ++k)
            {
                if (A[i] + B[j] == C[k])
                    ++counter;
            }
        }
    }

    cout << counter << endl;
    return 0;
}
