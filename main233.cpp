#include <iostream>
using namespace std;

int main(void)
{
    int N, counter = 1;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        counter *= 2;
    }
    cout << counter << endl;
    return 0;
}
