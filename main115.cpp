#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    if (A >= 13)
        cout << B;
    else if (A >= 6)
        cout << B / 2;
    else
        cout << 0;
    cout << endl;
}
