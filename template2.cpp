#include <bits/stdc++.h>
using namespace std;

//#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define endl '\n'
#define sz(x) ((int)(x).size())

typedef long long ll;

#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)

inline int calc_sum_digits(int n)
{
    int sum_digit = 0;
    while (n > 0)
    {
        sum_digit += n % 10;
        n /= 10;
    }
    return sum_digit;
}

/*
\_^^_/ < Hello, World!\n
*/

int main()
{
}
