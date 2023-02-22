#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    int counter = 0;
    while (1)
    {
        bool is_ok = true;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] % 2)
                is_ok = false;
        }

        if (is_ok == false)
            break;

        for (int i = 0; i < N; ++i)
            A[i] /= 2;

        ++counter;
    }
    cout << counter << endl;
    return 0;
}
