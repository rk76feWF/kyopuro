#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N, tmp, max_value = -100;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        if (tmp > max_value)
            max_value = tmp;
    }
    cout << max_value << endl;
}
