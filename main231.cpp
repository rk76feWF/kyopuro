#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    sort(A.rbegin(), A.rend());
    cout << A[0] - A[N - 1] << endl;

    return 0;
}
