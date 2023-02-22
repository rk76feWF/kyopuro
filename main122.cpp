#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, V;
    cin >> N >> V;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int answer = -1;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] == V)
            answer = i;
    }

    cout << answer << endl;
}
