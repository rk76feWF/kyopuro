#include <iostream>
using namespace std;

int main(void)
{
    int N, X;
    cin >> N >> X;

    char ans = 'A' + ((X + N - 1) / N) - 1;
    cout << ans << endl;
    return 0;
}
