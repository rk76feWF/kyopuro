#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans;
    if (N % 1000 == 0) {
        ans = 0;
    } else {
        ans = (N / 1000 + 1) * 1000 - N;
    }

    cout << ans << endl;
}
