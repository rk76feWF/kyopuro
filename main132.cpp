#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    int ans = 1;
    for (int i = 2; i <= min(A, B); ++i)
    {
        if (A % i == 0 && B % i == 0)
            ans = i;
    }
    cout << ans << endl;
}
