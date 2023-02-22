#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N;
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

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());

    long long int tmax, tmin, tmp, diff = 9223372036854775807;
    long long int bnear, cnear, dnear;
    for (auto i : A)
    {
        long long int back = lower_bound(B.begin() + 1, B.end() - 1, i) - B.begin();
        long long int front = back - 1;
        long long int x = B[front] - i;
        long long int y = B[back] - i;
        long long int near;
        if (x * x < y * y)
            near = front;
        else
            near = back;
        bnear = B[near];

        back = lower_bound(C.begin() + 1, C.end() - 1, i) - C.begin();
        front = back - 1;
        x = C[front] - i;
        y = C[back] - i;
        if (x * x < y * y)
            near = front;
        else
            near = back;
        cnear = C[near];

        back = lower_bound(D.begin() + 1, D.end() - 1, i) - D.begin();
        front = back - 1;
        x = D[front] - i;
        y = D[back] - i;
        if (x * x < y * y)
            near = front;
        else
            near = back;
        dnear = D[near];

        tmax = max({i, bnear, cnear, dnear});
        tmin = min({i, bnear, cnear, dnear});
        tmp = tmax - tmin;
        if (tmp < diff)
            diff = tmp;
    }

    cout << diff << endl;
    return 0;
}
