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

    int min_num = A[0];
    for (int i = 1; i < N; ++i)
    {
        if (A[i] < min_num)
            min_num = A[i];
    }

    cout << min_num << endl;
}
