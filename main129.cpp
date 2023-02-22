#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
            ++counter;
    }

    cout << counter << endl;
}
