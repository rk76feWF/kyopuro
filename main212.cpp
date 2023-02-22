#include <iostream>
#include <cstdlib>
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

    int tmax = *max_element(A.begin(), A.end());
    int tmin = *min_element(A.begin(), A.end());

    for (auto &i : A)
        cout << max({abs(i - tmax), abs(i - tmin)}) << endl;

    return 0;
}
