#include <iostream>
using namespace std;

int main(void)
{
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    int ans;
    if (L2 > L1)
        ans = R1 - L2;
    else if (L1 > L2)
        ans = R2 - L1;
    else
        ans = min(R1, R2) - L1;


    if (ans >= 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
    return 0;
}
