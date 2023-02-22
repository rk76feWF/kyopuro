#include <iostream>
using namespace std;

int main(void)
{
    int N;
    int d[101];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> d[i];

    int num[101] = {0};
    for (int i = 0; i < N; ++i)
        ++num[d[i]];

    int res = 0;
    for (int i = 1; i <= 100; ++i)
    {
        if (num[i])
            ++res;
    }
    cout << res << endl;
    return 0;
}
