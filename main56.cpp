#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<pair<int, string>> data(N);
    for (auto &i : data)
    {
        cin >> i.second >> i.first;
    }

    sort(data.rbegin(), data.rend());

    cout << data[1].second << endl;
}