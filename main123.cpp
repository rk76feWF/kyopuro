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

    int counter = 0;
    for (int i = 1; i < N; ++i)
    {
        if (A[i] > A[i - 1])
            ++counter;
    }

    cout << counter << endl;
}
