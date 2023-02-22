#include <iostream>
using namespace std;

int cnt_divisor(int N)
{
    int counter = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (N % i == 0)
            ++counter;
    }
    return counter;
}

int main(void)
{
    int N, K;
    cin >> N >> K;

    int counter = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (cnt_divisor(i) == K)
            ++counter;
    }
    cout << counter << endl;
}
