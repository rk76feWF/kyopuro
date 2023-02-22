#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int N = s.size();

    cout << s[0] << (N - 2) << s[N - 1] << endl;
    return 0;
}
