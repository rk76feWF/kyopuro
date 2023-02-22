#include <iostream>
using namespace std;

int sum_digit(int a)
{
    int counter = 0;
    while (a)
    {
        counter += a % 10;
        a /= 10;
    }
    return counter;
}

int main(void)
{
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i <= N; ++i)
    {
        int sum = sum_digit(i);
        if (A <= sum && sum <= B)
            ans += i;
    }
    cout << ans << endl;
    return 0;
}
