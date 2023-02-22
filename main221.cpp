#include <iostream>
using namespace std;

int main(void)
{
    int N, Y;
    cin >> N >> Y;

    int i = -1, j = -1, k - 1;
    bool flag = false;
    for (i = 0; i < N && !flag; ++i)
    {
        for (j = 0; j < N && !flag; ++j)
        {
            for (k = 0; k < N && !flag; ++k)
            {
                if (i + j + k <= N)
                {
                    if (i + j + k == Y)
                        flag = true;
                }
            }
        }
    }

    cout << i << " " << j << " " << k << endl;

    return 0;
}
