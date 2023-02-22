#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    if (A < B)
        cout << -1;
    else if (A == B)
        cout << 0;
    else
        cout << 1;
    cout << endl;
}
