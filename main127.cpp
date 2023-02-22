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

    vector<int> answer(9);
    for (int i = 0; i < N; ++i)
        ++answer[A[i] - 1];

    for (int i = 0; i < 9; ++i)
        cout << answer[i] << endl;
}
