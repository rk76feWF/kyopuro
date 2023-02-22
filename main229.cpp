#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int counter = 0, idx = 1;
    for (int i = 1; i <= N; ++i)
    {
        int t = i, tc = 0;
        while (t % 2 == 0)
        {
            t /= 2;
            ++tc;
        }
        if (tc > counter)
        {
            counter = tc;
            idx = i;
        }
    }

    cout << idx << endl;
    return 0;
}
