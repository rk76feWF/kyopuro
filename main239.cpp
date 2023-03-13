#include <iostream>
using namespace std;

int main(void)
{
    int Y;
    cin >> Y;

    int tmp = Y % 4;
    if (tmp == 0)
        cout << Y + 2;
    else if (tmp == 1)
        cout << Y + 1;
    else if (tmp == 2)
        cout << Y;
    else
        cout << Y + 3;

    cout << endl;
    return 0;
}
