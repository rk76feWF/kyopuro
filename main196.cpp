#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    long long int N, T;
    cin >> N >> T;
    vector<long long int> A(N);
    for (auto &i : A)
        cin >> i;

    long long int sum = 0;
    for (auto i : A)
        sum += i;

    if (T < sum)
    {
        long long int i;
        for (i = 0; i < N; ++i)
        {
            if (T - A[i] >= 0)
            {
                T -= A[i];
                if (i + 1 == N)
                    i = -1;
            }
            else
            {
                break;
            }
        }

        cout << i + 1 << ' ' << T << endl;
    }
    if (T >= sum)
    {
        long long int tmp = T % sum;
        cout << tmp << endl;
        for (long long int i = 0; i < N - 1; ++i)
        {
            if (tmp >= A[i])
                tmp - A[i];
            else
            {
                cout << i + 1 << ' ' << tmp << endl;
                break;
            }
        }
    }
}
