#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x = 1, counter = 0;
    char c;
    for (int i = 0; i < N; i++)
    {
        cin >> c;

        if (c == 'L')
        {
            if (x != 1)
                x--;
        }

        if (c == 'R')
        {
            if (x != 3)
                x++;
        }

        if (x == 3)
            counter++;
    }

    cout << counter << endl;
}