#include <iostream>
using namespace std;

int sum_digit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main(void)
{
    int N, A, B;
    cin >> N >> A >> B;

    int counter = 0;

    for (int i = 1; i <= N; i++)
    {
        if (A <= sum_digit(i) && sum_digit(i) <= B)
            counter += i;
    }

    cout << counter << endl;
}
