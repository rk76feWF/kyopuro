#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
    string S;
    cin >> S;

    set<char> T;
    for (auto &i : S)
    {
        T.insert(i);
    }
    cout << T.size() << endl;
}
