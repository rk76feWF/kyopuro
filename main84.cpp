#include <iostream>
#include <string>
using namespace std;

#define endl '\n'

inline int calc(int n)
{
    string str = to_string(n);
    int res = 0;
    for (auto c : str)
    {
        res += c - '0';
    }

    // while (n)
    // {
    //     res += n % 10;
    //     n /= 10;
    // }

    return res;
}

int main()
{
    cout << calc(1234) << endl;
}