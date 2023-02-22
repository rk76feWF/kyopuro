#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    int price = 700;
    for (auto i : S)
    {
        if (i == 'o')
            price += 100;
    }

    cout << price << endl;
    return 0;
}
