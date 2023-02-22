#include <iostream>
using namespace std;

bool is_prime(int N)
{
    if (N == 1)
        return false;

    bool flag = true;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
            flag = false;
    }
    return flag;
}

int main(void)
{
    int N;
    cin >> N;

    if (is_prime(N))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
