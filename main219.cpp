#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    long long int N;
    cin >> N;
    vector<long long int> A(N);
    for (auto &i : A)
        cin >> i;
    vector<long long int> B(N);
    for (auto &i : B)
        cin >> i;
    vector<long long int> C(N);
    for (auto &i : C)
        cin >> i;
    vector<long long int> D(N);
    for (auto &i : D)
        cin >> i;

    long long int tmp, diff = 9223372036854775807;
    long long int tmaxh, tminh, tmph;
    long long int tmaxl, tminl, tmpl;
    long long int bnearh = 9223372036854775807, cnearh = 9223372036854775807, dnearh = 9223372036854775807;
    long long int bnearl = 9223372036854775807, cnearl = 9223372036854775807, dnearl = 9223372036854775807;
    for (auto i : A)
    {
        for (auto j : B)
        {
            if (j >= i)
            {
                if (llabs(i - j) < llabs(i - bnearh))
                    bnearh = j;
            }
            else
            {
                if (llabs(i - j) < llabs(i - bnearl))
                    bnearl = j;
            }
        }
        for (auto k : C)
        {
            if (k >= i)
            {
                if (llabs(i - k) < llabs(i - cnearh))
                    cnearh = k;
            }
            else
            {
                if (llabs(i - k) < llabs(i - cnearl))
                    cnearl = k;
            }
        }
        for (auto l : D)
        {
            if (l >= i)
            {
                if (llabs(i - l) < llabs(i - dnearh))
                    dnearh = l;
            }
            else
            {
                if (llabs(i - l) < llabs(i - dnearl))
                    dnearl = l;
            }
        }
        tmaxh = max({i, bnearh, cnearh, dnearh});
        tminh = min({i, bnearh, cnearh, dnearh});

        tmaxl = max({i, bnearl, cnearl, dnearl});
        tminl = min({i, bnearl, cnearl, dnearl});

        tmph = tmaxh - tminh;
        tmpl = tmaxl - tminl;

        cout << bnearh << "aaa" << cnearh << "aaa" << dnearh << endl;
        cout << bnearl << "bbb" << cnearl << "bbb" << dnearl << endl;
        cout << tmph << " " << tmpl << endl;

        if (tmph <= tmpl)
            tmp = tmph;
        else
            tmp = tmpl;
        if (tmp < diff)
            diff = tmp;
    }

    cout << diff << endl;
    return 0;
}
