#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> A(4 * N);
    for (auto &i : A)
        cin >> i;

    int max = *max_element(A.begin(), A.end());
    int min = *min_element(A.begin(), A.end());

    cout << max - min << endl;
    return 0;
}
