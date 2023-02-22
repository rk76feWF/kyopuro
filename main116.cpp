#include <iostream>
using namespace std;

int main(void)
{
    int A, B;
    cin >> A >> B;

    if (B % A)
        cout << B - A;
    else
        cout << A + B;
    cout << endl;
}
