#include <iostream>
#include <string>
using namespace std;

#define endl '\n'

int main()
{
    string S;
    cin >> S;

    if (S == "Monday")
        cout << 5;
    else if (S == "Tuesday")
        cout << 4;
    else if (S == "Wednesday")
        cout << 3;
    else if (S == "Thursday")
        cout << 2;
    else if (S == "Friday")
        cout << 1;

    cout << endl;
}