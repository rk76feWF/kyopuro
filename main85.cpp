#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define endl '\n'

int main()
{
    vector<string> vs = {"banana", "orange", "apple", "grape", "cherry"};

    sort(vs.begin(), vs.end());

    for (auto s : vs)
    {
        cout << s << endl;
    }
}