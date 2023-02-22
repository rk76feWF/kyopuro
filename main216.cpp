#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(i);

    int val = 3;

    int back = std::lower_bound(v.begin() + 1, v.end() - 1, val) - v.begin();
    int front = back - 1;

    int x = v[front] - val;
    int y = v[back] - val;

    cout << "front: " << x << "\nback: " << y << endl;

    int near;
    if (x * x < y * y)
        near = front;
    else
        near = back;
    cout << v[near] << endl;

    return 0;
}
