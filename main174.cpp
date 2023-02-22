#include <iostream>
using namespace std;

int main(void)
{
    int L, R;
    cin >> L >> R;

    int counter = 0;
    for (int i = L; i <= R; ++i)
    {
        for (int j = i + 1; j <= R; ++j)
        {
            if (i % 10 == j % 10)
                ++counter;
        }
    }

    cout << counter << endl;
    return 0;
}
