#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    string S;
    string T;

    cin >> N >> S >> T;

    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] != T[i])
            ++counter;
    }
    cout << counter << endl;
}
