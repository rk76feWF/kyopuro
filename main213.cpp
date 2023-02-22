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
    vector<int> B(N);
    for (auto &i : B)
        cin >> i;
    vector<int> C(N);
    for (auto &i : C)
        cin >> i;
    vector<int> D(N);
    for (auto &i : D)
        cin >> i;

    int tmax, tmin, diff = 1000000000, tmp;
    for (auto i : A)
    {
        for (auto j : B)
        {
            for (auto k : C)
            {
                for (auto l : D)
                {
                    tmax = max({i, j, k, l});
                    tmin = min({i, j, k, l});
                    tmp = tmax - tmin;
                    if (tmp < diff)
                        diff = tmp;
                }
            }
        }
    }

    cout << diff << endl;
    return 0;
}
