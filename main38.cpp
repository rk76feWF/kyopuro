#include <iostream>
#define r(A) (A % 100 > A / 1000 % 10 * 10 + A / 10000)
int main()
{
    int A, B;
    std::cin >> A >> B;
    B++;
    std::cout << B / 100 + r(B) - A / 100 - r(A) << '\n';
}