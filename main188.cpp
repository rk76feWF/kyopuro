#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    string S;
    cin >> N >> S;

    if (S.substr(0, N / 2) == S.substr(N / 2, N / 2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
