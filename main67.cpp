#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<int> A(N);

    for (auto &i : A)
        scanf("%d", &i);

    sort(A.rbegin(), A.rend());

    bool flag = true;
    int tmp = -1;
    if (N >= A[0])
    {
        for (auto i : A)
        {
            if (tmp == i)
                flag = false;
            tmp = i;
        }
    }
    else
    {
        flag = false;
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
}