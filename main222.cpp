#include <iostream>
using namespace std;

int main(void)
{
    long long int N, Y;
    cin >> N >> Y;

    long long int res10000 = -1, res5000 = -1, res1000 = -1;
    for (long long int a = 0; a <= N; ++a)
    {
        for (long long int b = 0; b <= N; ++b)
        {
            long long int c = N - a - b;
            if (c < 0)
                break;
            long long int total = 10000 * a + 5000 * b + 1000 * c;
            if (total == Y)
            {
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }

    cout << res10000 << " " << res5000 << " " << res1000 << endl;
    return 0;
}
