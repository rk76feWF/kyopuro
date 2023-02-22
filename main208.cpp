#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    vector<int> d(N);
    for (auto &i : d)
        cin >> i;

    set<int> s;
    for (auto i : d)
        s.insert(i);

    cout << s.size() << endl;
    return 0;
}
