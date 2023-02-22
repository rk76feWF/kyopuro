#include <bits/stdc++.h>
using namespace std;

//#pragma GCC target("avx2")
//#pragma GCC target("avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")


//#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
//#define rep(i, n) reps(i, 0, n)
//#define rrep(i, n) reps(i, 1, n + 1)
//#define repd(i,n) for(ll i=n-1;i>=0;i--)
//#define rrepd(i,n) for(ll i=n;i>=1;i--)
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

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
    int N, A, B;
    cin >> N >> A >> B;

    int result = 0;

    for (int i = 1; i <= N; i++)
    {
        int x = calc_sum_digits(i);

        if (A <= x && x <= B)
        {
            result += i;
        }
    }
    cout << result << endl;
}
