#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;

    int counter = -1;
    bool flag = true;
    while (flag)
    {
        ++counter;
        for (auto i : A)
        {
            if (i % 2 == 0)
                i /= 2;
            else
                flag = false;
        }
    }

    cout << counter << endl;
    return 0;
}
