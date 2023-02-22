#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] == 1)
            continue;
        bool is_prime = true;
        for (int j = 2; j < A[i]; ++j)
        {
            if (A[i] % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            ++counter;
    }

    cout << counter << endl;
    return 0;
}
