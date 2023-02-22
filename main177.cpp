#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    string S;
    cin >> N >> S;

    int counter = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (S[i] == S[j])
                ++counter;
        }
    }
    cout << counter << endl;
    return 0;
}
