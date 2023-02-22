#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    int counter = 0;
    for (int i = 0; i < S.size() - 1; ++i)
    {
        if (S[i] == S[i + 1])
            ++counter;
    }
    cout << counter << endl;
}
