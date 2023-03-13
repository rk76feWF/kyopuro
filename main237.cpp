// バケットソート

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    string S;
    cin >> S;
     
    map<char, int> mp;
    for (auto nx : S)
        mp[nx]++;

    for (char i = 'a'; i <= 'z'; ++i)
    {
        if (mp[i] == 1)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
